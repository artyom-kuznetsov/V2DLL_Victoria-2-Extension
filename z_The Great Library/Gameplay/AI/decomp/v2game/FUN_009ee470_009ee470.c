// FUN_009ee470 @ 009ee470 body=[[009ee470, 009ee50e]]


void FUN_009ee470(int *param_1)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  int *in_ECX;
  
  iVar1 = in_ECX[0x1c];
  if (iVar1 == 3) goto LAB_009ee4f3;
  if ((char)in_ECX[0xe] == '\0') {
LAB_009ee49f:
    if ((iVar1 == 2) && ((char)in_ECX[0x1e] == '\0')) {
LAB_009ee4c1:
      in_ECX[0x1c] = 0;
    }
    else if (iVar1 == 1) {
      cVar3 = (**(code **)(*param_1 + 0x30))();
      if ((cVar3 == '\0') && ((char)in_ECX[0x1e] == '\0')) goto LAB_009ee4c1;
    }
    if (in_ECX[0x1f] == 1) {
      cVar3 = (**(code **)(*param_1 + 0x2c))();
      if ((cVar3 == '\0') && ((char)in_ECX[0x1e] == '\0')) {
        in_ECX[0x1f] = 0;
      }
    }
  }
  else if ((iVar1 == 1) || ((char)in_ECX[0x1e] != '\0')) {
    if ((char)in_ECX[0xe] == '\0') goto LAB_009ee49f;
  }
  else {
    in_ECX[0x1c] = 2;
  }
  if ((in_ECX[0x1c] == 1) && ((char)in_ECX[0xe] != '\0')) {
    FUN_009ee550();
  }
LAB_009ee4f3:
  pcVar2 = *(code **)(*in_ECX + 0x114);
  *(undefined1 *)(in_ECX + 0x22) = 0;
  (*pcVar2)(param_1);
  return;
}

