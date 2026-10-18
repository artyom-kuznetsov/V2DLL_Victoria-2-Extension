// FUN_008afde0 @ 008afde0 body=[[008afde0, 008afe4a]]


undefined4 FUN_008afde0(void)

{
  int in_EAX;
  
  if (in_EAX < 0x757) {
    if (in_EAX == 0x756) {
      return 1;
    }
    if (in_EAX != 0x2f0) {
      if (in_EAX == 0x4ae) {
        return 9;
      }
      if (in_EAX == 0x4af) {
        return 4;
      }
    }
  }
  else {
    switch(in_EAX) {
    case 0x757:
      return 2;
    case 0x758:
      return 6;
    case 0x772:
      return 7;
    case 0x773:
      return 8;
    case 0x775:
      return 3;
    case 0x776:
      return 5;
    }
  }
  return 0;
}

