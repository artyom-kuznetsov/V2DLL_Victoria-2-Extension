// FUN_009896d0 @ 009896d0 body=[[009896d0, 00989715]]


undefined4 FUN_009896d0(undefined4 param_1)

{
  undefined4 *in_EAX;
  undefined4 *puVar1;
  int iVar2;
  undefined4 in_ECX;
  
  puVar1 = in_EAX;
  if (0xf < (uint)in_EAX[5]) {
    puVar1 = (undefined4 *)*in_EAX;
  }
  iVar2 = FUN_005484e0(in_ECX,puVar1,in_EAX[4]);
  if (iVar2 == -1) {
    return 0;
  }
  FUN_00989c00(in_EAX[4],param_1,0,0xffffffff);
  return 1;
}

