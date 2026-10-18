// FUN_009efc10 @ 009efc10 body=[[009efc10, 009efc4b]]


void FUN_009efc10(void)

{
  char cVar1;
  int *piVar2;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x13c) != -1) {
    piVar2 = (int *)FUN_009c7290();
    cVar1 = (**(code **)(*piVar2 + 0x68))(*(undefined4 *)(in_ECX + 0x13c));
    if (cVar1 == '\0') {
      piVar2 = (int *)FUN_009c7290();
      (**(code **)(*piVar2 + 0x24))(*(undefined4 *)(in_ECX + 0x13c));
    }
  }
  return;
}

