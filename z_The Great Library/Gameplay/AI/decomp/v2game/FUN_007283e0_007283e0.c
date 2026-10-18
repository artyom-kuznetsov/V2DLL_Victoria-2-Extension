// FUN_007283e0 @ 007283e0 body=[[007283e0, 00728413] [00728420, 007284b6] [007284c0, 00728544]]


void FUN_007283e0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  int local_c;
  int *local_8;
  
  if ((param_1 != param_2) && (piVar8 = param_1 + 1, piVar8 != param_2)) {
    local_c = (int)piVar8 - (int)param_1;
    iVar9 = DAT_012588e8;
    do {
      iVar1 = *piVar8;
      iVar4 = *(int *)(iVar9 + 0xb60) * 0x58 + *(int *)(*(int *)(iVar9 + 0xbcc) + 0x3f4);
      uVar6 = (uint)*(byte *)(*(int *)(*(int *)(*param_1 + 0x28) + 8) + 8 + iVar4);
      iVar2 = *(int *)(iVar4 + 0x48);
      uVar7 = (uint)*(byte *)(*(int *)(*(int *)(iVar1 + 0x28) + 8) + 8 + iVar4);
      iVar3 = *(int *)(iVar2 + 4 + uVar6 * 8);
      iVar4 = *(int *)(iVar2 + 4 + uVar7 * 8);
      local_8 = piVar8;
      if ((iVar4 < iVar3) ||
         ((iVar4 <= iVar3 && (*(uint *)(iVar2 + uVar7 * 8) <= *(uint *)(iVar2 + uVar6 * 8))))) {
        while( true ) {
          piVar5 = local_8 + -1;
          iVar4 = *(int *)(*(int *)(iVar9 + 0xbcc) + 0x3f4) + *(int *)(iVar9 + 0xb60) * 0x58;
          uVar6 = (uint)*(byte *)(*(int *)(*(int *)(*piVar5 + 0x28) + 8) + 8 + iVar4);
          iVar2 = *(int *)(iVar4 + 0x48);
          uVar7 = (uint)*(byte *)(*(int *)(*(int *)(iVar1 + 0x28) + 8) + 8 + iVar4);
          iVar3 = *(int *)(iVar2 + 4 + uVar6 * 8);
          iVar4 = *(int *)(iVar2 + 4 + uVar7 * 8);
          if ((iVar4 < iVar3) ||
             ((iVar4 <= iVar3 && (*(uint *)(iVar2 + uVar7 * 8) <= *(uint *)(iVar2 + uVar6 * 8)))))
          break;
          *local_8 = *piVar5;
          local_8 = piVar5;
        }
        *local_8 = iVar1;
      }
      else {
        FID_conflict__memcpy(piVar8 + (1 - (local_c >> 2)),param_1,(local_c >> 2) * 4);
        *param_1 = iVar1;
        iVar9 = DAT_012588e8;
      }
      local_c = local_c + 4;
      piVar8 = piVar8 + 1;
    } while (piVar8 != param_2);
  }
  return;
}

