const uint8_t k_LCTL = KEY_LEFT_CTRL;
const uint8_t k_LSFT = KEY_LEFT_SHIFT;
const uint8_t k_LALT = KEY_LEFT_ALT;
const uint8_t k_LGUI = KEY_LEFT_GUI;
const uint8_t k_RCTL = KEY_RIGHT_CTRL;
const uint8_t k_RSFT = KEY_RIGHT_SHIFT;
const uint8_t k_RALT = KEY_RIGHT_ALT;
const uint8_t k_RGUI = KEY_RIGHT_GUI;



#define _4keys_  '_','_','_','_'
#define _7keys_  '_','_','_','_','_','_','_'
#define _12keys_  _4keys_,_4keys_,_4keys_
#define _20keys_  _4keys_,_4keys_,_4keys_,_4keys_,_4keys_
#define _60keys_  _20keys_, _20keys_, _20keys_

#define LAYOUT4( \
k01, k02, k03, k04 \
) \
k01, k02, k03, k04 


#define LAYOUT( \
  k000, k001, k002,   \
  k100, k101, k102,   \
  k200, k201, k202     \
) \
  k000, k001, k002, _7keys_, '_','_','_', _7keys_,  \
  k100, k101, k102, _7keys_, '_','_','_', _7keys_,  \
  k200, k201, k202, _7keys_, '_','_','_', _7keys_, \
  _20keys_,  \
  _20keys_,  \
  _20keys_

/*
#define LAYOUT( \
  k000, k001, k002, k003, k004, k005, k006, k007, k008, k009, k010, k011, k012, k013, k014, k015, k016, k017, k018, k019,  \
  k100, k101, k102, k103, k104, k105, k106, k107, k108, k109, k110, k111, k112, k113, k114, k115, k116, k117, k118, k119,  \
  k200, k201, k202, k203, k204, k205, k206, k207, k208, k209, k210, k211, k212, k213, k214, k215, k216, k217, k218, k219,  \
  k300, k301, k302, k303, k304, k305, k306, k307, k308, k309, k310, k311, k312, k313, k314, k315, k316, k317, k318, k319,  \
  k400, k401, k402, k403, k404, k405, k406, k407, k408, k409, k410, k411, k412, k413, k414, k415, k416, k417, k418, k419,  \
  k500, k501, k502, k503, k504, k505, k506, k507, k508, k509, k510, k511, k512, k513, k514, k515, k516, k517, k518, k519  \
) \
  k000, k001, k002, k003, k004, k005, k006, k007, k008, k009, k010, k011, k012, k013, k014, k015, k016, k017, k018, k019,  \
  k100, k101, k102, k103, k104, k105, k106, k107, k108, k109, k110, k111, k112, k113, k114, k115, k116, k117, k118, k119,  \
  k200, k201, k202, k203, k204, k205, k206, k207, k208, k209, k210, k211, k212, k213, k214, k215, k216, k217, k218, k219,  \
  k300, k301, k302, k303, k304, k305, k306, k307, k308, k309, k310, k311, k312, k313, k314, k315, k316, k317, k318, k319,  \
  k400, k401, k402, k403, k404, k405, k406, k407, k408, k409, k410, k411, k412, k413, k414, k415, k416, k417, k418, k419,  \
  k500, k501, k502, k503, k504, k505, k506, k507, k508, k509, k510, k511, k512, k513, k514, k515, k516, k517, k518, k519
*/
