// FUN_00704ca0 @ 00704ca0 body=[[00704ca0, 00704d06]]


void FUN_00704ca0(void)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  int *in_ECX;
  
  if ((char)in_ECX[0x31] != '\0') {
    pcVar1 = *(code **)(*in_ECX + 0x2c);
    *(undefined1 *)(in_ECX + 0x31) = 0;
    (*pcVar1)();
  }
  piVar2 = (int *)in_ECX[0x23];
  if (piVar2 != (int *)0x0) {
    if ((char)in_ECX[0x25] == '\0') {
      if (*(char *)(*piVar2 + 0x67) != '\0') {
        FUN_00748d90(piVar2);
      }
    }
    else {
      *(undefined1 *)(in_ECX + 0x25) = 0;
      FUN_006ef840();
    }
  }
  if (((in_ECX[0x71] != 0) && (iVar3 = *(int *)(in_ECX[0x71] + 0x28), iVar3 != 0)) &&
     (*(char *)(iVar3 + 0x67) != '\0')) {
    FUN_006fa170();
  }
  return;
}

