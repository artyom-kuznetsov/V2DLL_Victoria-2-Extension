// FUN_0091ef50 @ 0091ef50 body=[[0091ef50, 0091f04a] [0091f04e, 0091f063]]


/* WARNING: Removing unreachable block (ram,0x0091f045) */

uint FUN_0091ef50(void)

{
  int iVar1;
  uint uVar2;
  int in_ECX;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_00bb8828;
  local_14 = ExceptionList;
  uVar2 = *(uint *)(DAT_012587e4 + 4);
  if ((*(char *)(*(int *)(uVar2 + *(int *)(in_ECX + 0xc) * 4) + 0x67c) != '\0') &&
     (((iVar1 = *(int *)(in_ECX + 0x14),
       *(int *)(*(int *)(*(int *)(*(int *)(uVar2 + *(int *)(in_ECX + 0xc) * 4) + 0xbe8) + iVar1 * 4)
               + 0x20) != 0 ||
       (*(int *)(*(int *)(uVar2 + iVar1 * 4) + 0xcfc) == *(int *)(in_ECX + 0xc))) ||
      ((uVar2 = *(uint *)(uVar2 + *(int *)(in_ECX + 0xc) * 4), *(int *)(uVar2 + 0x142c) == iVar1 &&
       (*(int *)(in_ECX + 0x2c) != 0)))))) {
    local_c = 0;
    ExceptionList = &local_14;
    FUN_0091fa10(in_ECX,1);
    ExceptionList = local_14;
    return 0;
  }
  return uVar2 & 0xffffff00;
}

