// FUN_0045b200 @ 0045b200 body=[[0045b200, 0045b4ca] [0045b4e5, 0045b578]]


void FUN_0045b200(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  int *piVar5;
  int *local_220;
  int local_21c;
  uint local_218 [4];
  undefined4 local_208;
  uint local_204;
  int aiStack_120 [67];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b5bebf;
  local_14 = ExceptionList;
  if (param_2 < 0x9d8) {
    if (param_2 == 0x9d7) {
      ExceptionList = &local_14;
      iVar2 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%i");
      if (iVar2 == 0) {
        FUN_009a1140();
        ExceptionList = local_14;
        return;
      }
    }
    else if (param_2 == 0x2a1) {
      local_204 = 0xf;
      local_208 = 0;
      local_218[0] = local_218[0] & 0xffffff00;
      local_c = 0;
      ExceptionList = &local_14;
      FUN_009a1750();
      FUN_00408ed0(local_218,0,0xffffffff);
      FUN_0043bb10();
      if (0xf < local_204) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    else {
      if (param_2 == 0x3e5) {
        ExceptionList = &local_14;
        FUN_009a1c10();
        ExceptionList = local_14;
        return;
      }
      if (param_2 == 0x9d2) {
        local_220 = (int *)0x0;
        local_21c = 3;
        ExceptionList = &local_14;
        while( true ) {
          piVar4 = *(int **)(param_1 + 0x1c);
          if ((char)piVar4[0x44] == '\0') {
            iVar2 = (**(code **)(*piVar4 + 4))();
            piVar4[2] = iVar2;
            if (iVar2 == 0) {
              piVar4[3] = 0x13;
            }
            *(undefined1 *)(piVar4 + 0x44) = 1;
          }
          piVar4 = piVar4 + 3;
          piVar5 = aiStack_120;
          for (iVar2 = 0x41; iVar2 != 0; iVar2 = iVar2 + -1) {
            *piVar5 = *piVar4;
            piVar4 = piVar4 + 1;
            piVar5 = piVar5 + 1;
          }
          if ((aiStack_120[0] == 4) || (aiStack_120[0] == 0x13)) break;
          FUN_009a1440();
          if (*(int *)(param_1 + 0x20) == 0x2e) {
            pcVar3 = (char *)(param_1 + 0x22c);
            do {
              cVar1 = *pcVar3;
              pcVar3 = pcVar3 + 1;
            } while (cVar1 != '\0');
            FUN_00409350((char *)(param_1 + 0x22c),(int)pcVar3 - (param_1 + 0x22d));
            local_21c = FUN_00457690();
          }
          else if (*(int *)(param_1 + 0x20) == 0x9d4) {
            iVar2 = FUN_00aae9af();
            local_c = 1;
            if (iVar2 == 0) {
              local_220 = (int *)0x0;
            }
            else {
              local_220 = (int *)FUN_00464480();
            }
            local_c = 0xffffffff;
            (**(code **)(*local_220 + 0xc))();
          }
        }
        (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
        if ((local_220 != (int *)0x0) && (local_21c != 3)) {
          FUN_0068f390();
          FUN_0068f390();
          ExceptionList = local_14;
          return;
        }
        FUN_009885d0();
        local_c = 2;
        FUN_004015b0();
        local_c._0_1_ = 3;
        FUN_00987d20();
        FUN_00401280();
        local_c = CONCAT31(local_c._1_3_,2);
        FUN_00401650();
        FUN_00408ad0();
        ExceptionList = local_14;
        return;
      }
    }
  }
  else if (param_2 == 0x9e0) {
    ExceptionList = &local_14;
    FUN_009a1bb0();
  }
  else if (param_2 == 0x9ed) {
    ExceptionList = &local_14;
    FUN_009a1750();
    ExceptionList = local_14;
    return;
  }
  ExceptionList = local_14;
  return;
}

