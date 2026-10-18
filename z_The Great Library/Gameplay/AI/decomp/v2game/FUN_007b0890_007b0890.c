// FUN_007b0890 @ 007b0890 body=[[007b0890, 007b0965] [007b0969, 007b098f] [007b0993, 007b0a32]]


void FUN_007b0890(int param_1,int param_2,int param_3,int *param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  void **ppvVar5;
  char cVar6;
  int iVar7;
  bool bVar8;
  undefined4 local_54 [5];
  uint local_40;
  uint local_38 [4];
  undefined4 local_28;
  uint local_24;
  int local_1c;
  int local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3c950;
  local_10 = ExceptionList;
  ppvVar5 = &local_10;
  if (param_2 <= param_3) {
    *(int *)(param_1 + param_2 * 4) = *param_4;
    return;
  }
  do {
    ExceptionList = ppvVar5;
    iVar7 = (param_2 + -1) / 2;
    piVar2 = (int *)*param_4;
    piVar3 = *(int **)(param_1 + iVar7 * 4);
    if (param_5 == 0) {
      iVar4 = *(int *)(*(int *)(piVar3[0x10c] + 0x310) + 0x40);
      iVar1 = *(int *)(*(int *)(piVar2[0x10c] + 0x310) + 0x40);
      bVar8 = SBORROW4(iVar4,iVar1);
      iVar4 = iVar4 - iVar1;
LAB_007b09b9:
      cVar6 = bVar8 != iVar4 < 0;
LAB_007b09bc:
      if (cVar6 == '\0') {
        *(int *)(param_1 + param_2 * 4) = *param_4;
        ExceptionList = local_10;
        return;
      }
    }
    else {
      if (param_5 == 1) {
        (**(code **)(*piVar2 + 0x18))(local_54);
        local_8 = 0;
        (**(code **)(*piVar3 + 0x18))(local_38);
        local_8 = CONCAT31(local_8._1_3_,1);
        cVar6 = FUN_0098ab20();
        local_11 = cVar6;
        if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_38[0]);
        }
        local_8 = 0xffffffff;
        local_24 = 0xf;
        local_28 = 0;
        local_38[0] = local_38[0] & 0xffffff00;
        if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_54[0]);
        }
        goto LAB_007b09bc;
      }
      if (param_5 == 2) {
        (**(code **)(piVar2[0x100] + 0x18))(&local_1c,&stack0x00000018);
        (**(code **)(piVar3[0x100] + 0x18))(&local_18,&stack0x00000018);
        bVar8 = SBORROW4(local_18,local_1c);
        iVar4 = local_18 - local_1c;
        goto LAB_007b09b9;
      }
    }
    *(undefined4 *)(param_1 + param_2 * 4) = *(undefined4 *)(param_1 + iVar7 * 4);
    ppvVar5 = ExceptionList;
    param_2 = iVar7;
    if (iVar7 <= param_3) {
      *(int *)(param_1 + iVar7 * 4) = *param_4;
      ExceptionList = local_10;
      return;
    }
  } while( true );
}

