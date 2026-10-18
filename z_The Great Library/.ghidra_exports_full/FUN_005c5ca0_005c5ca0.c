// FUN_005c5ca0 @ 005c5ca0 body=[[005c5ca0, 005c5dd5]]


uint * FUN_005c5ca0(int param_1,uint *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  undefined8 uVar9;
  uint local_c;
  int local_8;
  
  *param_2 = 0;
  param_2[1] = 0;
  local_c = 0;
  local_8 = 0;
  if (0 < DAT_012587f4) {
    do {
      bVar1 = *(byte *)(param_3 + 8 + local_8);
      if (bVar1 != 0) {
        bVar2 = *(byte *)(local_8 + 8 + param_1);
        local_c = local_c + 1;
        if (bVar2 != 0) {
          iVar3 = *(int *)(*(int *)(param_3 + 0x48) + 4 + (uint)bVar1 * 8);
          uVar4 = *(uint *)(*(int *)(param_3 + 0x48) + (uint)bVar1 * 8);
          iVar7 = (uint)bVar2 * 8;
          uVar5 = *(uint *)(iVar7 + *(int *)(param_1 + 0x48));
          iVar6 = *(int *)(iVar7 + 4 + *(int *)(param_1 + 0x48));
          if ((iVar6 < iVar3) || ((iVar6 <= iVar3 && (uVar5 < uVar4)))) {
            if ((-1 < iVar6) &&
               ((((0 < iVar6 || (uVar5 != 0)) && (iVar3 <= iVar6)) &&
                ((iVar3 < iVar6 || (uVar4 < uVar5)))))) {
              uVar9 = __alldiv(uVar4 << 0xf,iVar3 << 0xf | uVar4 >> 0x11,uVar5,iVar6);
              uVar5 = *param_2;
              *param_2 = *param_2 + (uint)uVar9;
              param_2[1] = param_2[1] + (int)((ulonglong)uVar9 >> 0x20) +
                           (uint)CARRY4(uVar5,(uint)uVar9);
            }
          }
          else {
            uVar5 = *param_2;
            *param_2 = *param_2 + 0x8000;
            param_2[1] = param_2[1] + (uint)(0xffff7fff < uVar5);
          }
          puVar8 = (uint *)(*(int *)(param_1 + 0x48) + iVar7);
          uVar5 = *puVar8;
          *puVar8 = *puVar8 - uVar4;
          puVar8[1] = (puVar8[1] - iVar3) - (uint)(uVar5 < uVar4);
          iVar3 = *(int *)(iVar7 + 4 + *(int *)(param_1 + 0x48));
          if ((iVar3 < 1) && (iVar3 < 0)) {
            iVar3 = *(int *)(param_1 + 0x48);
            *(undefined4 *)(iVar7 + iVar3) = 0;
            *(undefined4 *)(iVar7 + 4 + iVar3) = 0;
          }
        }
      }
      local_8 = local_8 + 1;
    } while (local_8 < DAT_012587f4);
    if (local_c != 0) {
      uVar9 = __alldiv(*param_2 << 0xf,param_2[1] << 0xf | *param_2 >> 0x11,local_c << 0xf,
                       ((int)local_c >> 0x1f) << 0xf | local_c >> 0x11);
      *(undefined8 *)param_2 = uVar9;
    }
  }
  return param_2;
}

