// FUN_0092d800 @ 0092d800 body=[[0092d800, 0092db10]]


void FUN_0092d800(int param_1,int param_2)

{
  undefined4 *puVar1;
  int in_ECX;
  
  if (param_2 < 0x81e) {
    if (param_2 == 0x81d) {
      FUN_009a1ce0();
      return;
    }
    if (param_2 < 0x39f) {
      if (param_2 == 0x39e) {
        FUN_009885d0();
        FUN_0043bb10();
        return;
      }
      switch(param_2) {
      case 0x2c8:
        FUN_009a1c10();
        *(undefined4 *)(in_ECX + 0x40) = 0;
        return;
      case 0x344:
        FUN_009a1ce0();
        FUN_0092d750();
        return;
      case 0x388:
        *(bool *)(in_ECX + 0x60) = *(int *)(param_1 + 0x228) == 0x29f;
        return;
      case 0x39d:
        FUN_009885d0();
        FUN_0043bb10();
        return;
      }
    }
    else {
      if (param_2 == 0x649) {
        FUN_009a1ce0();
        return;
      }
      if (param_2 == 0x81b) {
        FUN_009a1bb0();
        return;
      }
      if (param_2 == 0x81c) {
        FUN_009a1ce0();
        return;
      }
    }
  }
  else if (param_2 < 0x90e) {
    if (param_2 == 0x90d) {
      FUN_009885d0();
      FUN_0043bb10();
      return;
    }
    switch(param_2) {
    case 0x8c2:
      FUN_009885d0();
      FUN_0043bb10();
      return;
    case 0x8c3:
      puVar1 = (undefined4 *)FUN_0055c6c0();
      *(undefined4 *)(in_ECX + 0x94) = *puVar1;
      *(undefined4 *)(in_ECX + 0x98) = puVar1[1];
      return;
    case 0x8d4:
      FUN_009885d0();
      FUN_0043bb10();
      return;
    case 0x8d7:
      puVar1 = (undefined4 *)FUN_0055c6c0();
      *(undefined4 *)(in_ECX + 0xa0) = *puVar1;
      *(undefined4 *)(in_ECX + 0xa4) = puVar1[1];
      return;
    }
  }
  else if (param_2 == 0x959) {
    FUN_009a1ce0();
  }
  else {
    if (param_2 == 0x9a7) {
      FUN_009885d0();
      FUN_0043bb10();
      return;
    }
    if (param_2 == 0xa4e) {
      puVar1 = (undefined4 *)FUN_0055c6c0();
      *(undefined4 *)(in_ECX + 0x18) = *puVar1;
      *(undefined4 *)(in_ECX + 0x1c) = puVar1[1];
      return;
    }
  }
  return;
}

