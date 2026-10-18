// FUN_005c7440 @ 005c7440 body=[[005c7440, 005c7512] [005c7516, 005c7728] [005c772c, 005c78d5] [005c78d9, 005c795c] [005c7960, 005c7a08] [005c7a0c, 005c7a5a] [005c7a5e, 005c7adb]]


/* WARNING: Type propagation algorithm not settling */

void FUN_005c7440(undefined4 ****param_1)

{
  undefined4 ****ppppuVar1;
  undefined4 ***pppuVar2;
  int *piVar3;
  char cVar4;
  char *pcVar5;
  int in_ECX;
  undefined4 ****ppppuStack_154;
  undefined4 ****ppppuStack_140;
  undefined4 uStack_13c;
  undefined4 ****local_138 [4];
  undefined4 local_128;
  uint local_124;
  undefined4 uStack_11c;
  char acStack_118 [260];
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b62582;
  pvStack_14 = ExceptionList;
  ppppuStack_154 = param_1;
  ExceptionList = &pvStack_14;
  FUN_009a0940();
  ppppuStack_154 = (undefined4 ****)(in_ECX + 8);
  FUN_0099f020();
  ppppuStack_154 = param_1;
  FUN_009a0940();
  ppppuStack_154 = (undefined4 ****)0x0;
  FUN_0099f770(param_1);
  if (*(int *)(in_ECX + 0xcc) != 0) {
    local_124 = 0xf;
    local_128 = 0;
    local_138[0] = (undefined4 ****)((uint)local_138[0] & 0xffffff00);
    pcVar5 = (char *)(in_ECX + 200);
    do {
      cVar4 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar4 != '\0');
    ppppuStack_154 = (undefined4 ****)(pcVar5 + -(in_ECX + 0xc9));
    FUN_00409350((char *)(in_ECX + 200));
    ppppuStack_154 = param_1;
    local_c = 0;
    FUN_009a0940();
    ppppuStack_154 = (undefined4 ****)0x0;
    FUN_0099f770(param_1);
    local_c = 0xffffffff;
    if (0xf < local_124) {
      ppppuStack_154 = local_138[0];
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  ppppuStack_154 = (undefined4 ****)0x5c7523;
  cVar4 = (**(code **)(**(int **)(in_ECX + 0xd0) + 0x20))();
  if (cVar4 != '\0') {
    ppppuStack_140 = *(undefined4 *****)(*(int *)(in_ECX + 0xd0) + 8);
    uStack_13c = *(undefined4 *)(*(int *)(in_ECX + 0xd0) + 0xc);
    ppppuStack_154 = param_1;
    FUN_009a0940();
    ppppuStack_154 = &ppppuStack_140;
    FUN_0099f020();
  }
  if (*(int *)(in_ECX + 0xd8) != 0) {
    ppppuVar1 = *(undefined4 *****)(*(int *)(in_ECX + 0xd8) + 0x58);
    ppppuStack_154 = param_1;
    FUN_009a0940();
    uStack_11c = 0xc;
    ppppuStack_154 = ppppuVar1;
    _sprintf(acStack_118,"%d");
    ppppuStack_154 = param_1;
    FUN_0099ff90();
    ppppuStack_154 = param_1;
    FUN_004013e0();
  }
  ppppuStack_154 = *(undefined4 *****)(in_ECX + 0xf0);
  if (ppppuStack_154 != (undefined4 ****)0x0) {
    ppppuStack_140 = &ppppuStack_154;
    FUN_0099f1e0();
  }
  ppppuVar1 = *(undefined4 *****)(in_ECX + 0x138);
  if (ppppuVar1 != (undefined4 ****)0x0) {
    ppppuStack_154 = param_1;
    FUN_009a0940();
    uStack_11c = 0xc;
    ppppuStack_154 = ppppuVar1;
    _sprintf(acStack_118,"%d");
    ppppuStack_154 = param_1;
    FUN_0099ff90();
    ppppuStack_154 = param_1;
    FUN_004013e0();
  }
  if (0 < *(int *)(in_ECX + 0xe4)) {
    ppppuStack_154 = param_1;
    FUN_00409c60();
  }
  if (*(int *)(in_ECX + 0xd4) != 0) {
    ppppuVar1 = *(undefined4 *****)(*(int *)(in_ECX + 0xd4) + 0x58);
    ppppuStack_154 = param_1;
    FUN_009a0940();
    uStack_11c = 0xc;
    ppppuStack_154 = ppppuVar1;
    _sprintf(acStack_118,"%d");
    ppppuStack_154 = param_1;
    FUN_0099ff90();
    ppppuStack_154 = param_1;
    FUN_004013e0();
  }
  if (*(char *)(in_ECX + 0xfc) != '\0') {
    ppppuStack_154 = param_1;
    FUN_009a0940();
    ppppuStack_154 = param_1;
    FUN_004013e0();
    ppppuStack_154 = param_1;
    FUN_004013e0();
  }
  ppppuStack_154 = *(undefined4 *****)(in_ECX + 0x17c);
  if (0 < (int)ppppuStack_154) {
    ppppuStack_140 = &ppppuStack_154;
    FUN_0099f1e0();
  }
  if (1 < (int)((double)((*(int *)(in_ECX + 0x180) + -43800000) / 0x18) / 365.0)) {
    ppppuStack_154 = local_138;
    FUN_0043acd0(in_ECX + 0x180);
    ppppuStack_154 = param_1;
    local_c = 1;
    FUN_009a0940();
    ppppuStack_154 = (undefined4 ****)0x0;
    FUN_0099f770(param_1);
    local_c = 0xffffffff;
    if (0xf < local_124) {
      ppppuStack_154 = local_138[0];
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  ppppuVar1 = *(undefined4 *****)(in_ECX + 0xa8);
  ppppuStack_154 = param_1;
  ppppuStack_140 = ppppuVar1;
  FUN_009a0940();
  if (*(char *)(param_1 + 3) == '\0') {
    ppppuStack_154 = (undefined4 ****)0x5c7771;
    FUN_0098fad0();
  }
  else {
    uStack_11c = 0xc;
    ppppuStack_154 = ppppuVar1;
    _sprintf(acStack_118,"%d");
  }
  ppppuStack_154 = param_1;
  FUN_0099ff90();
  ppppuStack_154 = param_1;
  FUN_004013e0();
  if (*(char *)(in_ECX + 0x70) != '\0') {
    ppppuStack_154 = param_1;
    FUN_009a0940();
    ppppuStack_154 = param_1;
    FUN_004013e0();
    ppppuStack_154 = param_1;
    FUN_004013e0();
    ppppuVar1 = *(undefined4 *****)(in_ECX + 0x74);
    ppppuStack_154 = param_1;
    FUN_009a0940();
    uStack_11c = 0xc;
    ppppuStack_154 = ppppuVar1;
    _sprintf(acStack_118,"%d");
    ppppuStack_154 = param_1;
    FUN_0099ff90();
    ppppuStack_154 = param_1;
    FUN_004013e0();
  }
  ppppuVar1 = *(undefined4 *****)(in_ECX + 0x30);
  do {
    if (ppppuVar1 == (undefined4 ****)0x0) {
      if (1 < (int)((double)((*(int *)(in_ECX + 0xa0) + -43800000) / 0x18) / 365.0)) {
        ppppuStack_154 = local_138;
        FUN_0043acd0(in_ECX + 0xa0);
        ppppuStack_154 = param_1;
        local_c = 2;
        FUN_009a0940();
        ppppuStack_154 = (undefined4 ****)0x0;
        FUN_0099f770(param_1);
        local_c = 0xffffffff;
        if (0xf < local_124) {
          ppppuStack_154 = local_138[0];
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
      }
      if (1 < (int)((double)((*(int *)(in_ECX + 0xa4) + -43800000) / 0x18) / 365.0)) {
        ppppuStack_154 = local_138;
        FUN_0043acd0(in_ECX + 0xa4);
        ppppuStack_154 = param_1;
        local_c = 3;
        FUN_009a0940();
        ppppuStack_154 = (undefined4 ****)0x0;
        FUN_0099f770(param_1);
        local_c = 0xffffffff;
        if (0xf < local_124) {
          ppppuStack_154 = local_138[0];
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
      }
      ppppuStack_154 = (undefined4 ****)(uint)*(byte *)(in_ECX + 0x7d);
      if (*(byte *)(in_ECX + 0x7d) != 0) {
        FUN_0099f470();
      }
      ppppuStack_154 = (undefined4 ****)(uint)*(byte *)(in_ECX + 0x7e);
      if (*(byte *)(in_ECX + 0x7e) != 0) {
        FUN_0099f470();
      }
      if (*(int *)(in_ECX + 0x18c) != 0) {
        local_124 = 0xf;
        local_128 = 0;
        local_138[0] = (undefined4 ****)((uint)local_138[0] & 0xffffff00);
        pcVar5 = (char *)(in_ECX + 0x188);
        do {
          cVar4 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar4 != '\0');
        ppppuStack_154 = (undefined4 ****)(pcVar5 + -(in_ECX + 0x189));
        FUN_00409350((char *)(in_ECX + 0x188));
        ppppuStack_154 = param_1;
        local_c = 4;
        FUN_009a0940();
        ppppuStack_154 = (undefined4 ****)0x0;
        FUN_0099f770(param_1);
        local_c = 0xffffffff;
        if (0xf < local_124) {
          ppppuStack_154 = local_138[0];
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        ppppuStack_154 = local_138;
        FUN_0043acd0(in_ECX + 400);
        ppppuStack_154 = param_1;
        local_c = 5;
        FUN_009a0940();
        ppppuStack_154 = (undefined4 ****)0x0;
        FUN_0099f770(param_1);
        local_c = 0xffffffff;
        if (0xf < local_124) {
          ppppuStack_154 = local_138[0];
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
      }
      if (0 < *(int *)(in_ECX + 0x4c)) {
        ppppuStack_154 = param_1;
        FUN_004013e0();
        ppppuStack_154 = param_1;
        FUN_004013e0();
        ppppuStack_154 = param_1;
        FUN_004013e0();
        piVar3 = *(int **)(in_ECX + 0x44);
        while (piVar3 != (int *)0x0) {
          ppppuStack_140 = *(undefined4 *****)(*piVar3 + 0x10);
          uStack_13c = *(undefined4 *)(*piVar3 + 0x14);
          piVar3 = (int *)piVar3[2];
          ppppuStack_154 = &ppppuStack_140;
          FUN_0099f020();
        }
        ppppuStack_154 = param_1;
        FUN_004013e0();
        ppppuStack_154 = param_1;
        FUN_004013e0();
      }
      ExceptionList = pvStack_14;
      return;
    }
    pppuVar2 = *ppppuVar1;
    ppppuStack_140 = (undefined4 ****)ppppuVar1[2];
    ppppuStack_154 = (undefined4 ****)0x5c780a;
    cVar4 = (*(code *)(*pppuVar2)[9])();
    if (cVar4 != '\0') goto LAB_005c783b;
    ppppuStack_154 = (undefined4 ****)0x5c781e;
    cVar4 = (*(code *)(*pppuVar2)[10])();
    if (cVar4 != '\0') goto LAB_005c783b;
    ppppuStack_154 = (undefined4 ****)0x5c7832;
    cVar4 = (*(code *)(*pppuVar2)[0xb])();
    ppppuVar1 = ppppuStack_140;
    if (cVar4 != '\0') {
LAB_005c783b:
      ppppuStack_154 = param_1;
      FUN_009a0940();
      ppppuStack_154 = param_1;
      (*(code *)(*pppuVar2)[1])();
      ppppuVar1 = ppppuStack_140;
    }
  } while( true );
}

