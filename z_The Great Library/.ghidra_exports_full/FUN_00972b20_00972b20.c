// FUN_00972b20 @ 00972b20 body=[[00972b20, 00972d53]]


void FUN_00972b20(int param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 *puVar3;
  int in_ECX;
  
  if (param_2 < 0x2e8) {
    if (param_2 == 0x2e7) {
      pcVar2 = (char *)(param_1 + 0x22c);
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      FUN_00409350((char *)(param_1 + 0x22c),(int)pcVar2 - (param_1 + 0x22d));
      puVar3 = (undefined4 *)FUN_0043ac50();
      *(undefined4 *)(in_ECX + 0x1d4) = *puVar3;
      return;
    }
    if (param_2 < 500) {
      if (param_2 == 499) {
        (**(code **)(*(int *)(in_ECX + 0x50) + 0xc))();
        return;
      }
      if (param_2 == 0x55) {
        (**(code **)(*(int *)(in_ECX + 0x2c) + 0xc))();
        return;
      }
    }
    else {
      switch(param_2) {
      case 500:
        (**(code **)(*(int *)(in_ECX + 0x80) + 0xc))();
        return;
      case 0x1f5:
        (**(code **)(*(int *)(in_ECX + 0xb0) + 0xc))();
        return;
      case 0x1f6:
        (**(code **)(*(int *)(in_ECX + 0xe0) + 0xc))();
        return;
      case 0x2a1:
        FUN_009885d0();
        puVar3 = (undefined4 *)FUN_0043ac50();
        *(undefined4 *)(in_ECX + 0x1d0) = *puVar3;
        return;
      }
    }
  }
  else if (param_2 < 0x992) {
    if (param_2 == 0x991) {
      (**(code **)(*(int *)(in_ECX + 0x110) + 0xc))();
      return;
    }
    if (param_2 == 0x647) {
      FUN_009a1bb0();
      return;
    }
    if (param_2 == 0x98e) {
      FUN_009a1bb0();
      *(undefined1 *)(in_ECX + 0x1d8) = 1;
      return;
    }
  }
  else if (param_2 == 0x992) {
    (**(code **)(*(int *)(in_ECX + 0x140) + 0xc))();
  }
  else {
    if (param_2 == 0x993) {
      (**(code **)(*(int *)(in_ECX + 0x170) + 0xc))();
      return;
    }
    if (param_2 == 0x994) {
      (**(code **)(*(int *)(in_ECX + 0x1a0) + 0xc))();
      return;
    }
  }
  return;
}

