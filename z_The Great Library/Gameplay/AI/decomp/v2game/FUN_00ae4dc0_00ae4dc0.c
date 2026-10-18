// FUN_00ae4dc0 @ 00ae4dc0 body=[[00ae4dc0, 00ae4e3c] [00ae4e40, 00ae4eeb]]


/* WARNING: Removing unreachable block (ram,0x00ae4ecc) */

undefined4 FUN_00ae4dc0(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *in_ECX;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint local_28;
  uint local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00b37c9d;
  local_c = ExceptionList;
  uVar4 = DAT_00ef259c ^ (uint)&stack0xffffffc8;
  ExceptionList = &local_c;
  iVar6 = *(int *)*in_ECX;
  uVar5 = in_ECX[1];
  local_4 = 0;
  if (uVar5 != 0) {
    FUN_00aeb6c0(uVar5);
  }
  local_18 = 0;
  local_28 = 0;
  if (uVar5 != 0) {
    do {
      piVar1 = (int *)(*in_ECX + local_28 * 4);
      iVar3 = *piVar1;
      if (*(float *)(iVar6 + 0x3c) <= *(float *)(iVar3 + 0x3c)) {
        if ((uint)(*(int *)(iVar3 + 0x3c) - *(int *)(iVar6 + 0x3c)) < 0xb) {
          uVar7 = local_18 + 1;
          if (uVar7 != 0) {
            iVar8 = local_18 + 2;
            local_18 = uVar7;
            goto LAB_00ae4e87;
          }
          goto LAB_00ae4e98;
        }
      }
      else {
        local_18 = 1;
        iVar8 = 2;
        iVar6 = iVar3;
LAB_00ae4e87:
        FUN_00aeb6c0(iVar8);
        uVar7 = local_18;
LAB_00ae4e98:
        local_18 = uVar7;
        piVar2 = (int *)(local_18 * 4 + -4);
        if (piVar2 != (int *)0x0) {
          *piVar2 = *piVar1;
        }
      }
      local_28 = local_28 + 1;
    } while (local_28 < uVar5);
  }
  uVar5 = FUN_00ab047b(uVar4);
  ExceptionList = local_c;
  return *(undefined4 *)((uVar5 % local_18) * 4);
}

