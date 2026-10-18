// FUN_00523400 @ 00523400 body=[[00523400, 00523877]]


/* WARNING: Removing unreachable block (ram,0x00523761) */
/* WARNING: Removing unreachable block (ram,0x00523673) */

undefined4 FUN_00523400(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  int *piVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  longlong lVar12;
  
  __alldiv();
  __alldiv();
  __allmul();
  iVar3 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + param_3 * 4) + 0xe88);
  __alldiv();
  if ((param_3 == *(int *)(param_1 + 0x20)) ||
     (((*(int *)(*(int *)(*(int *)(param_1 + 0xbe8) + param_3 * 4) + 0x34) == 0 &&
       ((((char)param_2 != 'R' || ((char)((uint)param_2 >> 8) != 'E')) ||
        ((char)((uint)param_2 >> 0x10) != 'B')))) &&
      (((*(char *)(param_1 + 0x1c) != 'R' || (*(char *)(param_1 + 0x1d) != 'E')) ||
       (*(char *)(param_1 + 0x1e) != 'B')))))) {
    piVar4 = *(int **)(param_1 + 0xe8c);
    piVar8 = piVar4;
    while ((piVar4 <= piVar8 && (piVar8 < *(int **)(param_1 + 0xe90)))) {
      iVar5 = *piVar8;
      piVar8 = piVar8 + 1;
      if (*(int *)(iVar5 + 0xc) == param_3) {
        if (*(char *)(iVar5 + 0x20) == '\0') {
          return 0;
        }
        if (*(int *)(iVar5 + 0xc) != 0) {
          lVar12 = __allmul();
          lVar12 = lVar12 >> 0xf;
          if (*(int *)(param_1 + 0x20) != param_3) {
            __allmul();
            plVar6 = (longlong *)FUN_0048bfc0();
            lVar12 = *plVar6;
          }
          if (lVar12 < CONCAT44(param_5,param_4)) {
            return 0;
          }
          puVar1 = (uint *)(iVar3 + 0x18);
          uVar2 = *puVar1;
          *puVar1 = *puVar1 + param_4;
          *(int *)(iVar3 + 0x1c) = *(int *)(iVar3 + 0x1c) + param_5 + (uint)CARRY4(uVar2,param_4);
          puVar1 = (uint *)(iVar5 + 0x18);
          uVar2 = *puVar1;
          *puVar1 = *puVar1 + param_4;
          *(int *)(iVar5 + 0x1c) = *(int *)(iVar5 + 0x1c) + param_5 + (uint)CARRY4(uVar2,param_4);
          puVar1 = (uint *)(param_1 + 0xe78);
          uVar2 = *puVar1;
          *puVar1 = *puVar1 + param_4;
          *(int *)(param_1 + 0xe7c) =
               *(int *)(param_1 + 0xe7c) + param_5 + (uint)CARRY4(uVar2,param_4);
          return 1;
        }
        uVar11 = __alldiv();
        iVar9 = ((int)((ulonglong)uVar11 >> 0x20) - *(int *)(iVar5 + 0x1c)) -
                (uint)((uint)uVar11 < *(uint *)(iVar5 + 0x18));
        if ((param_5 <= iVar9) &&
           ((param_5 < iVar9 || (param_4 <= (uint)uVar11 - *(uint *)(iVar5 + 0x18))))) {
          puVar1 = (uint *)(iVar5 + 0x18);
          uVar2 = *puVar1;
          *puVar1 = *puVar1 + param_4;
          *(int *)(iVar5 + 0x1c) = *(int *)(iVar5 + 0x1c) + param_5 + (uint)CARRY4(uVar2,param_4);
          puVar1 = (uint *)(param_1 + 0xe78);
          uVar2 = *puVar1;
          *puVar1 = *puVar1 + param_4;
          *(int *)(param_1 + 0xe7c) =
               *(int *)(param_1 + 0xe7c) + param_5 + (uint)CARRY4(uVar2,param_4);
          return 1;
        }
      }
    }
    if (param_3 == 0) {
      lVar12 = __alldiv();
    }
    else {
      lVar12 = __allmul();
      lVar12 = lVar12 >> 0xf;
      if (*(int *)(param_1 + 0x20) != param_3) {
        FUN_0043a6a0();
        plVar6 = (longlong *)FUN_0048bfc0();
        lVar12 = *plVar6;
      }
    }
    if (CONCAT44(param_5,param_4) <= lVar12) {
      puVar7 = (undefined4 *)FUN_00aae9af();
      puVar10 = (undefined4 *)0x0;
      if (puVar7 != (undefined4 *)0x0) {
        puVar7[1] = 0x18d;
        *puVar7 = CCreditor::vftable;
        puVar7[2] = param_2;
        puVar7[3] = param_3;
        puVar7[4] = 0;
        puVar7[5] = 0;
        puVar7[6] = 0;
        puVar7[7] = 0;
        *(undefined1 *)(puVar7 + 8) = 1;
        puVar10 = puVar7;
      }
      FUN_00401000();
      FUN_00b31c00();
      uVar11 = __alldiv();
      *(undefined8 *)(puVar10 + 4) = uVar11;
      if (iVar3 != 0) {
        puVar1 = (uint *)(iVar3 + 0x18);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 + param_4;
        *(int *)(iVar3 + 0x1c) = *(int *)(iVar3 + 0x1c) + param_5 + (uint)CARRY4(uVar2,param_4);
      }
      puVar1 = (uint *)(param_1 + 0xe78);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 + param_4;
      *(int *)(param_1 + 0xe7c) = *(int *)(param_1 + 0xe7c) + param_5 + (uint)CARRY4(uVar2,param_4);
      puVar10[6] = param_4;
      puVar10[7] = param_5;
      FUN_0068f390();
      FUN_0054c6e0(*(undefined4 *)(param_1 + 0xe8c));
      return 1;
    }
  }
  return 0;
}

