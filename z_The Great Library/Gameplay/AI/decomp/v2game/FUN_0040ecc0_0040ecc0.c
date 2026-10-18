// FUN_0040ecc0 @ 0040ecc0 body=[[0040ecc0, 0040ee34] [0040ee38, 0040ee45] [0040ee49, 0040ee56] [0040ee5a, 0040ee6d]]


/* WARNING: Removing unreachable block (ram,0x0040ed82) */
/* WARNING: Removing unreachable block (ram,0x0040ed90) */
/* WARNING: Removing unreachable block (ram,0x0040edc6) */
/* WARNING: Removing unreachable block (ram,0x0040edd4) */
/* WARNING: Removing unreachable block (ram,0x0040ee51) */
/* WARNING: Removing unreachable block (ram,0x0040ee0a) */
/* WARNING: Removing unreachable block (ram,0x0040ee10) */
/* WARNING: Removing unreachable block (ram,0x0040ee40) */
/* WARNING: Removing unreachable block (ram,0x0040ee2f) */

void FUN_0040ecc0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b47f28;
  local_14 = ExceptionList;
  iVar1 = *(int *)(in_ECX + 0x390);
  if (((iVar1 != 0) && (*(char *)(iVar1 + 0x1f0) != '\0')) &&
     (*(int *)(iVar1 + 0x218) == *(int *)(in_ECX + 0x3a4))) {
    iVar1 = **(int **)(in_ECX + 0x398);
    ExceptionList = &local_14;
    uVar2 = (**(code **)(*param_1 + 0x80))();
    *(undefined4 *)(*(int *)(in_ECX + 0x398) + 4 + iVar1 * 4) = uVar2;
    FUN_0040f4d0();
    if (**(int **)(in_ECX + 0x398) == 4) {
      FUN_004148c0();
      uStack_c = 0;
      FUN_004069c0(*(undefined4 *)(in_ECX + 0x390));
      uStack_c._0_1_ = 1;
      FUN_00406a60(*(undefined4 *)(in_ECX + 0x390));
      uStack_c = CONCAT31(uStack_c._1_3_,2);
      FUN_00406b00(*(undefined4 *)(in_ECX + 0x390));
      *(undefined1 *)(*(int *)(in_ECX + 0x390) + 0x21c) = 1;
    }
  }
  ExceptionList = local_14;
  return;
}

