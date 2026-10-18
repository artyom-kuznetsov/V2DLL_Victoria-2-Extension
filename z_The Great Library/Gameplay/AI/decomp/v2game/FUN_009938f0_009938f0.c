// FUN_009938f0 @ 009938f0 body=[[009938f0, 00993910]]


void FUN_009938f0(void)

{
  int iVar1;
  int *in_ECX;
  
  if (in_ECX[0xc] != 0) {
    iVar1 = (**(code **)(*in_ECX + 0x38))();
    PHYSFS_seek(in_ECX[0xc],iVar1,iVar1 >> 0x1f);
  }
  return;
}

