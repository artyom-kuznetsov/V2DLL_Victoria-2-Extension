// FUN_006eb9f0 @ 006eb9f0 body=[[006eb9f0, 006eba62] [006eba66, 006eba7b] [006eba7f, 006ebad5]]


void FUN_006eb9f0(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3f201;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = CGoodsCategoryItem::vftable;
  in_ECX[7] = CGoodsCategoryItem::vftable;
  local_8 = 2;
  iVar2 = 0;
  if (0 < (int)(in_ECX[0xb] - in_ECX[10] & 0xfffffffc)) {
    do {
      puVar1 = *(undefined4 **)(in_ECX[10] + iVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)(in_ECX[0xb] - in_ECX[10]) >> 2);
  }
  if (in_ECX[0xe] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0xe]);
  }
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  in_ECX[0x10] = 0;
  if (in_ECX[10] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[10]);
  }
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  *in_ECX = &PTR_FUN_00e392f0;
  in_ECX[7] = &PTR_FUN_00e39320;
  local_8 = 4;
  if ((int *)in_ECX[8] != (int *)0x0) {
    (**(code **)(*(int *)in_ECX[8] + 0x50))();
  }
  local_8 = 0xffffffff;
  in_ECX[7] = &PTR_FUN_00e39158;
  *in_ECX = &PTR_FUN_00e38708;
  FUN_009a62b0();
  ExceptionList = local_10;
  return;
}

