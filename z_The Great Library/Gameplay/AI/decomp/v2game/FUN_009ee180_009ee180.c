// FUN_009ee180 @ 009ee180 body=[[009ee180, 009ee25a]]


void FUN_009ee180(int *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  int *piVar3;
  char cVar4;
  int *in_ECX;
  
  if (in_ECX[0x1c] != 3) {
    if ((char)in_ECX[0xe] == '\0') {
      puVar2 = (undefined4 *)in_ECX[0x16];
      while (puVar2 != (undefined4 *)0x0) {
        piVar3 = (int *)*puVar2;
        puVar2 = (undefined4 *)puVar2[2];
        (**(code **)(*piVar3 + 0x14))();
      }
      in_ECX[0x1c] = 0;
    }
    else {
      cVar4 = (**(code **)(*param_1 + 0x30))();
      if ((cVar4 == '\0') && (in_ECX[0x1c] == 1)) {
        in_ECX[0x1c] = 2;
        FUN_009ee510();
      }
      if (in_ECX[0x1c] != 3) {
        cVar4 = (**(code **)(*param_1 + 0x30))();
        if (cVar4 != '\0') {
          in_ECX[0x1c] = 1;
          FUN_009ee550();
        }
        cVar4 = (**(code **)(*param_1 + 0x30))();
        if (((cVar4 == '\0') && (cVar4 = (**(code **)(*param_1 + 0x34))(), cVar4 == '\0')) &&
           (cVar4 = (**(code **)(*param_1 + 0x2c))(), cVar4 == '\0')) {
          pcVar1 = *(code **)(*in_ECX + 0x114);
          in_ECX[0x1c] = 2;
          (*pcVar1)(param_1);
          return;
        }
      }
    }
  }
  (**(code **)(*in_ECX + 0x114))(param_1);
  return;
}

