// FUN_0042dfb0 @ 0042dfb0 body=[[0042dfb0, 0042e10c]]


void FUN_0042dfb0(int param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  
  if (param_2 < 0x33b) {
    if (param_2 == 0x33a) {
      pcVar2 = (char *)(param_1 + 0x22c);
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      FUN_00409350((char *)(param_1 + 0x22c),(int)pcVar2 - (param_1 + 0x22d));
      FUN_0043bb10();
      return;
    }
    if (param_2 < 0x2f1) {
      if (param_2 == 0x2f0) {
        FUN_0042d650();
        return;
      }
      if (param_2 == 0xbe) {
        FUN_0042d650();
        return;
      }
      if (param_2 == 0x1d4) {
        FUN_00435840();
        return;
      }
    }
    else if (param_2 == 0x339) {
      FUN_009885d0();
      FUN_0043bb10();
      return;
    }
  }
  else if (param_2 < 0x42e) {
    if (param_2 == 0x42d) {
      FUN_0042d650();
      return;
    }
    if (param_2 == 0x342) {
      FUN_0042d650();
      return;
    }
    if (param_2 == 0x42c) {
      FUN_0042d650();
      return;
    }
  }
  else if (param_2 == 0x6e2) {
    FUN_0042d650();
  }
  return;
}

