// FUN_00727900 @ 00727900 body=[[00727900, 007279e9] [007279f0, 00727a9a]]


void FUN_00727900(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  int local_c;
  int *local_8;
  
  if (param_1 != param_2) {
    piVar9 = param_1 + 1;
    if (piVar9 != param_2) {
      local_c = (int)piVar9 - (int)param_1;
      iVar6 = DAT_012588e8;
      do {
        iVar1 = *piVar9;
        iVar2 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar6 + 0xb60) * 4);
        iVar3 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar6 + 0xb60) * 4);
        uVar7 = (uint)*(byte *)(*(int *)(*(int *)(*param_1 + 0x28) + 8) + 0x118c + iVar2);
        iVar4 = *(int *)(iVar2 + 0x11cc);
        uVar8 = (uint)*(byte *)(*(int *)(*(int *)(iVar1 + 0x28) + 8) + 0x118c + iVar3);
        iVar3 = *(int *)(iVar3 + 0x11cc);
        iVar5 = *(int *)(iVar4 + 4 + uVar7 * 8);
        iVar2 = *(int *)(iVar3 + 4 + uVar8 * 8);
        local_8 = piVar9;
        if ((iVar2 < iVar5) ||
           ((iVar2 <= iVar5 && (*(uint *)(iVar3 + uVar8 * 8) <= *(uint *)(iVar4 + uVar7 * 8))))) {
          while( true ) {
            piVar10 = local_8 + -1;
            iVar2 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar6 + 0xb60) * 4);
            uVar7 = (uint)*(byte *)(*(int *)(*(int *)(*piVar10 + 0x28) + 8) + 0x118c + iVar2);
            iVar3 = *(int *)(iVar2 + 0x11cc);
            iVar2 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar6 + 0xb60) * 4);
            uVar8 = (uint)*(byte *)(*(int *)(*(int *)(iVar1 + 0x28) + 8) + 0x118c + iVar2);
            iVar4 = *(int *)(iVar2 + 0x11cc);
            iVar5 = *(int *)(iVar3 + 4 + uVar7 * 8);
            iVar2 = *(int *)(iVar4 + 4 + uVar8 * 8);
            if ((iVar2 < iVar5) ||
               ((iVar2 <= iVar5 && (*(uint *)(iVar4 + uVar8 * 8) <= *(uint *)(iVar3 + uVar7 * 8)))))
            break;
            *local_8 = *piVar10;
            local_8 = piVar10;
          }
          *local_8 = iVar1;
        }
        else {
          FID_conflict__memcpy(piVar9 + (1 - (local_c >> 2)),param_1,(local_c >> 2) * 4);
          iVar6 = DAT_012588e8;
          *param_1 = iVar1;
        }
        local_c = local_c + 4;
        piVar9 = piVar9 + 1;
      } while (piVar9 != param_2);
    }
  }
  return;
}

