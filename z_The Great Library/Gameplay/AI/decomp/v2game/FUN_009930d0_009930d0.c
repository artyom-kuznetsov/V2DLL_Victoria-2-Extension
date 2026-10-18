// FUN_009930d0 @ 009930d0 body=[[009930d0, 00993107]]


undefined4 FUN_009930d0(undefined4 *param_1)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = (**(code **)(*in_ECX + 0x38))();
  FUN_009d7300();
  if (iVar1 != 0) {
    PHYSFS_read(in_ECX[0xc],*param_1,1,iVar1);
  }
  return 1;
}

