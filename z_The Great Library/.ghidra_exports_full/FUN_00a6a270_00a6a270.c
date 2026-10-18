// FUN_00a6a270 @ 00a6a270 body=[[00a6a270, 00a6a2bd]]


void FUN_00a6a270(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3a698;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = &PTR_FUN_00e427b0;
  local_8 = 0;
  tbb::internal::NFS_Free((void *)in_ECX[1]);
  *in_ECX = &PTR_FUN_00e4271c;
  ExceptionList = local_10;
  return;
}

