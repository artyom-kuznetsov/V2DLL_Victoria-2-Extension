// FUN_0096a2c0 @ 0096a2c0 body=[[0096a2c0, 0096a374] [0096a378, 0096a4d8]]


/* WARNING: Removing unreachable block (ram,0x0096a420) */

void FUN_0096a2c0(uint *param_1,longlong *param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong local_28;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b64383;
  local_14 = ExceptionList;
  local_28 = 0;
  ExceptionList = &local_14;
  lVar7 = __alldiv(*param_1 << 0x1e,*param_1 >> 2,0xc3500000,0);
  if (lVar7 != 0) {
    if (DAT_0131bb34 == 0) {
      iVar1 = FUN_00aae9af(0x188);
      local_c = 0x12;
      if (iVar1 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = FUN_0041a160();
      }
      iVar5 = DAT_0131bb34;
      local_c = 0x13;
      if ((iVar1 != DAT_0131bb34) && (DAT_0131bb34 != 0)) {
        FUN_0096dd80(DAT_0131bb34);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(iVar5);
      }
      local_c = 0xffffffff;
      DAT_0131bb34 = iVar1;
    }
    iVar1 = DAT_0131bb34;
    piVar2 = (int *)(DAT_0131bb34 + 0xc);
    iVar5 = *(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2;
    iVar6 = 0;
    if (0 < iVar5) {
      do {
        if (*(int *)(iVar1 + 0x10) - *piVar2 >> 2 < iVar6) {
          iVar3 = FUN_0096bb70();
        }
        else {
          iVar3 = *(int *)(*piVar2 + iVar6 * 4);
        }
        if (*(char *)(iVar3 + 0x3d0) != '\0') {
          uVar4 = *(uint *)(param_1[0x14] + iVar6 * 4);
          lVar8 = __alldiv(uVar4 << 0x1e,uVar4 >> 2,0xc3500000,0);
          lVar8 = __alldiv(lVar8 << 0xf,lVar7);
          lVar8 = __alldiv(lVar8 << 0xf,*(undefined4 *)(iVar3 + 0x68),*(undefined4 *)(iVar3 + 0x6c))
          ;
          if (0x8000 < lVar8) {
            lVar8 = 0x8000;
          }
          lVar8 = __allmul(*(undefined4 *)(iVar3 + 0x60),*(undefined4 *)(iVar3 + 100),lVar8);
          local_28 = (lVar8 >> 0xf) + local_28;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar5);
    }
  }
  iVar1 = *(int *)(param_3 + 0x18);
  uVar4 = *(uint *)(iVar1 + 0x78);
  lVar7 = __alldiv(uVar4 << 0x1e,((int)uVar4 >> 0x1f) << 0x1e | uVar4 >> 2,0x1f40000,0);
  iVar1 = *(int *)(iVar1 + 0x80);
  uVar4 = iVar1 + 1000;
  lVar8 = __alldiv(iVar1 << 0x1e,((int)uVar4 >> 0x1f) << 0x1e | uVar4 >> 2,0x1f40000,0);
  lVar7 = __allmul(lVar7 + local_28,lVar8 + CONCAT44(param_5,param_4));
  *param_2 = lVar7 >> 0xf;
  ExceptionList = local_14;
  return;
}

