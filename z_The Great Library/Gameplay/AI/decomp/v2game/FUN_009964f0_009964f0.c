// FUN_009964f0 @ 009964f0 body=[[009964f0, 0099651d]]


undefined4 FUN_009964f0(void)

{
  undefined4 in_EAX;
  int *piVar1;
  undefined4 uVar2;
  int *unaff_EDI;
  
  piVar1 = (int *)FUN_005c2ad0(in_EAX);
  uVar2 = (**(code **)(*piVar1 + 0x48))();
  (**(code **)(*unaff_EDI + 0x10))(uVar2);
  return uVar2;
}

