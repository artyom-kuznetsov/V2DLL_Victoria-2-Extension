// FUN_00472210 @ 00472210 body=[[00472210, 004722f1]]


undefined8 * FUN_00472210(undefined8 *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int in_EAX;
  int iVar6;
  uint uVar7;
  int *piVar8;
  undefined8 uVar9;
  int local_8;
  
  local_8 = 0;
  piVar5 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_EAX + 4) * 4) + 0xe44);
  do {
    if (piVar5 == (int *)0x0) {
      uVar7 = __alldiv((longlong)*(int *)(*(int *)(DAT_012586dc + 0x40) + 0x8c) * (longlong)local_8,
                       1000,0);
      uVar9 = __alldiv(uVar7 << 0x1e,((int)uVar7 >> 0x1f) << 0x1e | uVar7 >> 2,0x1f40000,0);
      *param_1 = uVar9;
      return param_1;
    }
    piVar1 = piVar5 + 2;
    iVar2 = *piVar5;
    piVar8 = *(int **)(iVar2 + 0x48);
    while ((piVar5 = (int *)*piVar1, *(int **)(iVar2 + 0x48) <= piVar8 &&
           (piVar8 < *(int **)(iVar2 + 0x4c)))) {
      iVar3 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *piVar8 * 4);
      piVar8 = piVar8 + 1;
      if (local_8 < *(int *)(iVar3 + 0x38)) {
        iVar4 = *(int *)(iVar3 + 0x14c);
        iVar6 = *(int *)(iVar3 + 0x148);
        if (iVar6 != iVar4) {
          do {
            if (*(int *)(iVar6 + 4) == *(int *)(param_2 + 4)) break;
            iVar6 = iVar6 + 8;
          } while (iVar6 != iVar4);
          if (iVar6 != iVar4) {
            local_8 = *(int *)(iVar3 + 0x38);
          }
        }
      }
    }
  } while( true );
}

