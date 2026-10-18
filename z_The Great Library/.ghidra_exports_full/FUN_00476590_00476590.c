// FUN_00476590 @ 00476590 body=[[00476590, 00476630] [00476634, 004766ac] [004766b0, 00476793] [00476797, 004767c9] [004767cd, 0047685f]]


void FUN_00476590(int *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  int unaff_EDI;
  uint local_34;
  uint local_2c [3];
  char *local_20 [2];
  uint local_18;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b45048;
  local_10 = ExceptionList;
  local_20[1] = "GFX_trade_flow_icon_province";
  local_18 = 0xdfb60c;
  local_20[0] = "GFX_trade_flow_icon_factory";
  local_14 = "GFX_trade_flow_icon_military";
  pcVar2 = local_20[*param_1];
  local_18 = 0xf;
  local_20[1] = (char *)0x0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_10;
  FUN_00409350();
  local_8 = 0;
  (**(code **)(**(int **)(unaff_EDI + 0x30) + 0xe4))();
  local_8 = 0xffffffff;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  (**(code **)(**(int **)(*(int *)(unaff_EDI + 0x30) + 0x94) + 0x130))();
  (**(code **)(**(int **)(unaff_EDI + 0x30) + 0x48))();
  uVar3 = FUN_004760d0();
  local_8 = 1;
  FUN_00408ed0(uVar3);
  FUN_00a5ecc0();
  local_8 = 0xffffffff;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if ((char)param_1[0x11] == '\0') {
    local_18 = 0xf;
    local_20[1] = (char *)0x0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350();
    local_8 = 3;
    FUN_00408ed0(local_2c);
  }
  else {
    FUN_00401000(((float)param_1[0xf] + 0.0005) * 1000.0);
    FUN_00b31c00();
    uVar3 = FUN_009ca1b0();
    local_8 = 2;
    FUN_00408ed0(uVar3);
  }
  FUN_00a5ecc0();
  local_8 = 0xffffffff;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uVar3 = FUN_00476100();
  local_8 = 4;
  FUN_00408ed0(uVar3);
  local_8 = 0xffffffff;
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  (**(code **)(**(int **)(unaff_EDI + 0x2c) + 0x48))();
  if (param_1[0x12] == -1) {
    (**(code **)(**(int **)(unaff_EDI + 0x34) + 0x38))();
    (**(code **)(**(int **)(unaff_EDI + 0x34) + 0x104))();
    ExceptionList = local_10;
    return;
  }
  (**(code **)(**(int **)(unaff_EDI + 0x34) + 0x48))();
  (**(code **)(**(int **)(unaff_EDI + 0x34) + 0x108))();
  (**(code **)(**(int **)(unaff_EDI + 0x34) + 0x34))();
  (**(code **)(**(int **)(unaff_EDI + 0x34) + 0x124))();
  ExceptionList = local_10;
  return;
}

