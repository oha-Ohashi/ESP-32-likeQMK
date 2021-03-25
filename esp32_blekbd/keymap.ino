enum layer_names{
  _L01,
  _L02,
  _L03
};

const uint16_t keymap[][120] = {
  [_L01] = { LAYOUT( 
    'x','y','z',     'y','z','x',     'z','x','y' 
  )},
  [_L02] = {
   '1','2','3','4',_4keys_,_4keys_,_4keys_,_4keys_,
   LSFT('a'),'b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e',
   LCTL('a'),LT(1,'b'),TO(1),'d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e',
   LAYOUT4('a','b','c','d'),'a','b','c','d','e','a','b','c','d','e','a','b','c','d','e',
   'a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e',
   'a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e'
  },
  [_L03] = {
    'g','h','i','j',_4keys_,_12keys_,
    'k','l','m','n',_4keys_,_12keys_,
    'r',LT(1,'d'),TO(0),'o',_4keys_,_12keys_,  _60keys_
  }
};
uint16_t pick_kc(uint8_t layer, uint8_t pos){ 
  return keymap[layer][pos];
}
