// FUN_009c3550 @ 009c3550 body=[[009c3550, 009c36ef]]


void FUN_009c3550(int param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  int *in_ECX;
  
  if ((*(int *)(param_1 + 8) == 0) && ((char)in_ECX[0xe] != '\0')) {
    if ((char)in_ECX[0x24] != '\0') {
      iVar1 = *(int *)(param_1 + 0x10);
      if (iVar1 == 5) {
        FUN_009ee590();
        FUN_009ee5b0();
        (**(code **)(*in_ECX + 0x110))();
        *(undefined1 *)(param_1 + 0x18) = 1;
        return;
      }
      if ((iVar1 == 3) && (*(int *)(param_1 + 0x14) == 2)) {
        in_ECX[0x1f] = 1;
        *(undefined1 *)(param_1 + 0x18) = 1;
        return;
      }
      if ((iVar1 != 4) || (*(int *)(param_1 + 0x14) != 2)) {
        if (((iVar1 == 3) || (iVar1 == 4)) && (in_ECX[0x1c] != 3)) {
          if ((in_ECX[0x1c] != 4) && (*(int *)(param_1 + 0x14) == 1)) {
            in_ECX[0x1c] = 4;
            FUN_009ee550();
          }
          *(undefined1 *)(param_1 + 0x18) = 1;
          return;
        }
        cVar2 = (**(code **)(*param_2 + 0x30))();
        if ((cVar2 == '\0') && ((in_ECX[0x1c] == 1 || (in_ECX[0x1c] == 4)))) {
          in_ECX[0x1c] = 2;
          FUN_009ee510();
        }
        if (in_ECX[0x1c] != 3) {
          cVar2 = (**(code **)(*param_2 + 0x30))();
          if (cVar2 == '\0') {
            cVar2 = (**(code **)(*param_2 + 0x34))();
            if (cVar2 == '\0') {
              cVar2 = (**(code **)(*param_2 + 0x2c))();
              if (cVar2 == '\0') {
                in_ECX[0x1c] = 2;
              }
            }
          }
        }
        *(undefined1 *)(param_1 + 0x18) = 1;
        return;
      }
      if (in_ECX[0x1f] == 1) {
        in_ECX[0x1f] = 0;
        FUN_009ee5d0();
        *(undefined1 *)(param_1 + 0x18) = 1;
        return;
      }
    }
  }
  else if (in_ECX[0x1c] == 4) {
    if ((char)in_ECX[0x24] == '\0') {
      in_ECX[0x1c] = 0;
      return;
    }
    cVar2 = (**(code **)(*param_2 + 0x30))();
    if (cVar2 == '\0') {
      if (in_ECX[0x1c] != 0) {
        FUN_009ee570();
      }
      in_ECX[0x1c] = 0;
    }
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  return;
}

