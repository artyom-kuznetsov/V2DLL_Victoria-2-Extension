// FUN_00727100 @ 00727100 body=[[00727100, 00727231]]


void FUN_00727100(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int local_c;
  int *local_8;
  
  if (param_1 != param_2) {
    piVar7 = param_1 + 1;
    if (piVar7 != param_2) {
      local_c = (int)piVar7 - (int)param_1;
      do {
        iVar1 = *(int *)(DAT_012588e8 + 0xbcc);
        uVar5 = (uint)*(byte *)(*(int *)(*(int *)(*param_1 + 0x28) + 8) + 0x5bc + iVar1);
        iVar2 = *piVar7;
        iVar3 = *(int *)(iVar1 + 0x5fc);
        uVar6 = (uint)*(byte *)(*(int *)(*(int *)(iVar2 + 0x28) + 8) + 0x5bc + iVar1);
        iVar4 = *(int *)(iVar3 + 4 + uVar5 * 8);
        iVar1 = *(int *)(iVar3 + 4 + uVar6 * 8);
        local_8 = piVar7;
        if ((iVar1 < iVar4) ||
           ((iVar1 <= iVar4 && (*(uint *)(iVar3 + uVar6 * 8) <= *(uint *)(iVar3 + uVar5 * 8))))) {
          while( true ) {
            iVar1 = *(int *)(DAT_012588e8 + 0xbcc);
            uVar5 = (uint)*(byte *)(*(int *)(*(int *)(local_8[-1] + 0x28) + 8) + 0x5bc + iVar1);
            iVar3 = *(int *)(iVar1 + 0x5fc);
            uVar6 = (uint)*(byte *)(*(int *)(*(int *)(iVar2 + 0x28) + 8) + 0x5bc + iVar1);
            iVar4 = *(int *)(iVar3 + 4 + uVar5 * 8);
            iVar1 = *(int *)(iVar3 + 4 + uVar6 * 8);
            if ((iVar1 < iVar4) ||
               ((iVar1 <= iVar4 && (*(uint *)(iVar3 + uVar6 * 8) <= *(uint *)(iVar3 + uVar5 * 8)))))
            break;
            *local_8 = local_8[-1];
            local_8 = local_8 + -1;
          }
          *local_8 = iVar2;
        }
        else {
          FID_conflict__memcpy(piVar7 + (1 - (local_c >> 2)),param_1,(local_c >> 2) * 4);
          *param_1 = iVar2;
        }
        local_c = local_c + 4;
        piVar7 = piVar7 + 1;
      } while (piVar7 != param_2);
    }
  }
  return;
}

