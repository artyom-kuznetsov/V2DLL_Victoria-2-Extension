// FUN_004d8130 @ 004d8130 body=[[004d8130, 004d81b6] [004d81c0, 004d8383] [004d8387, 004d8449]]


/* WARNING: Removing unreachable block (ram,0x004d837a) */

void FUN_004d8130(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int in_ECX;
  int *piVar3;
  int *piVar4;
  int iVar5;
  char *pcVar6;
  undefined1 auStack_140 [32];
  int aiStack_120 [67];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b51636;
  local_14 = ExceptionList;
  if (param_2 < 0x2f2) {
    if (param_2 != 0x2f1) {
      switch(param_2) {
      case 0x3d:
        ExceptionList = &local_14;
        while( true ) {
          local_c = 0xffffffff;
          piVar3 = *(int **)(param_1 + 0x1c);
          if ((char)piVar3[0x44] == '\0') {
            iVar5 = (**(code **)(*piVar3 + 4))();
            piVar3[2] = iVar5;
            if (iVar5 == 0) {
              piVar3[3] = 0x13;
            }
            *(undefined1 *)(piVar3 + 0x44) = 1;
          }
          piVar3 = piVar3 + 3;
          piVar4 = aiStack_120;
          for (iVar5 = 0x41; iVar5 != 0; iVar5 = iVar5 + -1) {
            *piVar4 = *piVar3;
            piVar3 = piVar3 + 1;
            piVar4 = piVar4 + 1;
          }
          if ((aiStack_120[0] == 4) || (aiStack_120[0] == 0x13)) break;
          FUN_009a1440(param_1);
          local_c = 1;
          pcVar6 = (char *)(param_1 + 0x24);
          do {
            cVar1 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar1 != '\0');
          FUN_00409350((char *)(param_1 + 0x24),(int)pcVar6 - (param_1 + 0x25));
          iVar5 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%f",auStack_140);
          if (iVar5 == 0) {
            FUN_009a1140();
          }
          FUN_004d8760();
        }
        break;
      default:
        goto switchD_004d8183_caseD_3e;
      case 0x55:
        ExceptionList = &local_14;
        while( true ) {
          piVar3 = *(int **)(param_1 + 0x1c);
          if ((char)piVar3[0x44] == '\0') {
            iVar5 = (**(code **)(*piVar3 + 4))();
            piVar3[2] = iVar5;
            if (iVar5 == 0) {
              piVar3[3] = 0x13;
            }
            *(undefined1 *)(piVar3 + 0x44) = 1;
          }
          piVar3 = piVar3 + 3;
          piVar4 = aiStack_120;
          for (iVar5 = 0x41; iVar5 != 0; iVar5 = iVar5 + -1) {
            *piVar4 = *piVar3;
            piVar3 = piVar3 + 1;
            piVar4 = piVar4 + 1;
          }
          if ((aiStack_120[0] == 4) || (aiStack_120[0] == 0x13)) break;
          (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
          FUN_00aaf0c5(*(int *)(param_1 + 0x1c) + 0x10);
          FUN_004e9b90();
        }
        break;
      case 0x8a:
        ExceptionList = &local_14;
        FUN_009a1c10();
        *(undefined4 *)(in_ECX + 100) = *(undefined4 *)(in_ECX + 0x60);
        ExceptionList = local_14;
        return;
      case 0xd9:
        ExceptionList = &local_14;
        uVar2 = FUN_009885d0();
        local_c = 0;
        uVar2 = FUN_004a0c90(DAT_0125870c,uVar2);
        *(undefined4 *)(in_ECX + 0xc) = uVar2;
        FUN_00408ad0();
        ExceptionList = local_14;
        return;
      }
      (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
      ExceptionList = local_14;
      return;
    }
    iVar5 = in_ECX + 0x3c;
    pcVar6 = "%f";
  }
  else {
    if (param_2 == 0x30c) {
      ExceptionList = &local_14;
      FUN_009a1bb0(in_ECX + 0x40);
      ExceptionList = local_14;
      return;
    }
    if (param_2 == 0x33b) {
      ExceptionList = &local_14;
      FUN_009a1750(in_ECX + 0x44,0);
      ExceptionList = local_14;
      return;
    }
    if (param_2 != 0x33d) {
      return;
    }
    iVar5 = in_ECX + 0x68;
    pcVar6 = "%i";
  }
  ExceptionList = &local_14;
  iVar5 = FID_conflict__sscanf((char *)(param_1 + 0x22c),pcVar6,iVar5);
  if (iVar5 == 0) {
    FUN_009a1140();
    ExceptionList = local_14;
    return;
  }
switchD_004d8183_caseD_3e:
  ExceptionList = local_14;
  return;
}

