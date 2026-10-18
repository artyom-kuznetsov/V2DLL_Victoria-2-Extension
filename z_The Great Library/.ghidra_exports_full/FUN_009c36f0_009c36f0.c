// FUN_009c36f0 @ 009c36f0 body=[[009c36f0, 009c37c4]]


void FUN_009c36f0(int *param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int *in_ECX;
  undefined1 local_14 [8];
  undefined1 local_c [8];
  
  iVar4 = (**(code **)(*param_1 + 0x4c))(local_c);
  iVar4 = *(int *)(iVar4 + 4);
  piVar5 = (int *)(**(code **)(*param_1 + 0x4c))(local_14);
  iVar4 = iVar4 * 5 + *piVar5 * 3;
  if (in_ECX[0x1c] != 3) {
    cVar3 = (**(code **)(*param_1 + 0x30))();
    if ((cVar3 == '\0') || ((in_ECX[0x1c] != 4 && ((char)in_ECX[0xe] == '\0')))) {
      if (in_ECX[0x1c] != 0) {
        puVar1 = (undefined4 *)in_ECX[0x16];
        while (puVar1 != (undefined4 *)0x0) {
          piVar5 = (int *)*puVar1;
          puVar1 = (undefined4 *)puVar1[2];
          (**(code **)(*piVar5 + 0x14))();
        }
      }
      in_ECX[0x1c] = 0;
    }
    if ((iVar4 != in_ECX[0x30]) && (in_ECX[0x1c] == 4)) {
      FUN_009ee510();
    }
    if (((((char)in_ECX[0xe] == '\0') && (in_ECX[0x1f] == 1)) &&
        (cVar3 = (**(code **)(*param_1 + 0x2c))(), cVar3 == '\0')) && ((char)in_ECX[0x1e] == '\0'))
    {
      in_ECX[0x1f] = 0;
    }
  }
  pcVar2 = *(code **)(*in_ECX + 0x114);
  in_ECX[0x30] = iVar4;
  (*pcVar2)(param_1);
  return;
}

