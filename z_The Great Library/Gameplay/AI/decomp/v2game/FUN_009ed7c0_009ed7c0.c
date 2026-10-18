// FUN_009ed7c0 @ 009ed7c0 body=[[009ed7c0, 009ed813]]


float10 FUN_009ed7c0(void)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int *in_ECX;
  
  iVar1 = *(int *)in_ECX[0x4f];
  uVar3 = (**(code **)(*in_ECX + 100))(in_ECX[0x2cb]);
  cVar2 = (**(code **)(iVar1 + 0x80))(&stack0x00000004,in_ECX + 0x25,uVar3);
  if (cVar2 != '\0') {
    return (float10)1;
  }
  return (float10)DAT_00f092dc;
}

