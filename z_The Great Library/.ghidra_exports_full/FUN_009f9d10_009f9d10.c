// FUN_009f9d10 @ 009f9d10 body=[[009f9d10, 009f9d46]]


int * FUN_009f9d10(void)

{
  int *piVar1;
  int *in_ECX;
  undefined4 uVar2;
  int *local_8;
  
  piVar1 = (int *)*in_ECX;
  if (piVar1 == (int *)0x0) {
    return (int *)0x0;
  }
  uVar2 = 0;
  if ((*(char *)((int)in_ECX + 0x15) != '\0') && (*(char *)((int)in_ECX + 0x16) == '\0')) {
    uVar2 = 0x2000;
  }
  local_8 = in_ECX;
  (**(code **)(*piVar1 + 0x2c))(piVar1,0,0,&local_8,uVar2);
  return local_8;
}

