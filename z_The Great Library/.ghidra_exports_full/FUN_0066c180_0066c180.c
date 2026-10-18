// FUN_0066c180 @ 0066c180 body=[[0066c180, 0066c23b] [0066c23f, 0066c265] [0066c269, 0066c285]]


void FUN_0066c180(int *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  int *piVar4;
  char *pcVar5;
  int _Value;
  char local_68 [32];
  uint local_48;
  undefined4 local_38;
  uint local_34;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4c6c8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  (**(code **)(*param_1 + 0x38))();
  _Value = 1;
  do {
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    local_8 = 0;
    pcVar2 = __itoa(_Value,local_68,10);
    pcVar5 = pcVar2;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_00409350(pcVar2,(int)pcVar5 - (int)(pcVar2 + 1));
    local_8 = 1;
    uVar3 = FUN_00988fa0(local_2c);
    local_8 = CONCAT31(local_8._1_3_,2);
    piVar4 = (int *)(**(code **)(*(int *)param_1[0x58c] + 0x34))(uVar3);
    (**(code **)(*piVar4 + 0x48))((_Value == param_2) + '\x01');
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_48);
    }
    local_8 = 0xffffffff;
    local_34 = 0xf;
    local_38 = 0;
    local_48 = local_48 & 0xffffff00;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
    _Value = _Value + 1;
  } while (_Value < 0x17);
  ExceptionList = local_10;
  return;
}

