#define left_keybord true //set false if right
#define invert_col false //set true to invert columns

const int colNum = 3;
const int rowNum = 3;

const int colPin[colNum] = { 2, 3, 4 };
const int rowPin[rowNum] = { 5, 6, 7};

bool currentState[rowNum][colNum];
bool beforeState[rowNum][colNum];

int i,j;

void setup() {

  for( i = 0; i < rowNum; i++){
    pinMode(rowPin[i],OUTPUT);
  }

  for( i = 0; i < colNum; i++){
    pinMode(colPin[i],INPUT_PULLUP);
  }

  for( i = 0; i < rowNum; i++){
    for( j = 0; j < colNum; j++){
      currentState[i][j] = HIGH;
      beforeState[i][j] = HIGH;
    }
    digitalWrite(rowPin[i], HIGH);
  }

  Serial.begin(4800);
}

void loop() {
  for( i = 0; i < rowNum; i++){
    digitalWrite( rowPin[i], LOW );
    for( j = 0; j < colNum; j++){
      currentState[i][j] = digitalRead(colPin[j]);
      if ( currentState[i][j] != beforeState[i][j] ){
        /*Serial.print("key(");
        Serial.print(i);
        Serial.print(",");
        Serial.print(j);
        Serial.println(")");*/

        bool press_release = currentState[i][j];
        byte code = encode(
          !press_release, i, j,
          left_keybord,invert_col);
        //Serial.print("code: ");
        //Serial.println(code);
        Serial.write('b');
        Serial.write(code);
        
      beforeState[i][j] = currentState[i][j];
      delay(20);
      }
    }
    digitalWrite( rowPin[i], HIGH );
  }
}
