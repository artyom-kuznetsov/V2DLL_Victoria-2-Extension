// FUN_00a1d690 @ 00a1d690 body=[[00a1d690, 00a1d6e4]]


void FUN_00a1d690(void)

{
  int iVar1;
  undefined4 *unaff_ESI;
  undefined1 local_404 [1024];
  
  iVar1 = PHYSFS_read(*unaff_ESI,local_404,1,0x400);
  while (iVar1 != 0) {
    FUN_00a1d420(local_404);
    iVar1 = PHYSFS_read(*unaff_ESI,local_404,1,0x400);
  }
  return;
}

