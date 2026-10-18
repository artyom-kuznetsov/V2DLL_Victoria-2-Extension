// FUN_009dc900 @ 009dc900 body=[[009dc900, 009dca04] [009dca08, 009dca1a]]


/* WARNING: Removing unreachable block (ram,0x009dc983) */
/* WARNING: Removing unreachable block (ram,0x009dc9fc) */
/* WARNING: Removing unreachable block (ram,0x009dc9ff) */

void FUN_009dc900(void)

{
  uint uVar1;
  int in_ECX;
  undefined2 *in_EDX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b41a48;
  local_10 = ExceptionList;
  if (((*(uint *)(in_ECX + 0x40) & 2) == 0) && (**(uint **)(in_ECX + 0x24) != 0)) {
    uVar1 = **(uint **)(in_ECX + 0x24);
    if (uVar1 <= *(uint *)(in_ECX + 0x3c)) {
      uVar1 = *(uint *)(in_ECX + 0x3c);
    }
    ExceptionList = &local_10;
    FUN_0098a390(**(int **)(in_ECX + 0x14),(int)(uVar1 - **(int **)(in_ECX + 0x14)) >> 1);
    local_8 = 0;
  }
  else {
    if (((*(uint *)(in_ECX + 0x40) & 4) != 0) || (**(int **)(in_ECX + 0x20) == 0)) {
      local_8 = 2;
      ExceptionList = &local_10;
      *(undefined4 *)(in_EDX + 8) = 0;
      *(undefined4 *)(in_EDX + 10) = 7;
      *in_EDX = 0;
      FUN_0098a270();
      ExceptionList = local_10;
      return;
    }
    ExceptionList = &local_10;
    FUN_0098a390(**(int **)(in_ECX + 0x10),
                 (**(int **)(in_ECX + 0x20) + **(int **)(in_ECX + 0x30) * 2) -
                 **(int **)(in_ECX + 0x10) >> 1);
    local_8 = 1;
  }
  *(undefined4 *)(in_EDX + 8) = 0;
  *(undefined4 *)(in_EDX + 10) = 7;
  *in_EDX = 0;
  FUN_0098a270();
  ExceptionList = local_10;
  return;
}

