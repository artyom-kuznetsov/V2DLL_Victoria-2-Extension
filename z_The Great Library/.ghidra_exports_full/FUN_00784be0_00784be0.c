// FUN_00784be0 @ 00784be0 body=[[00784be0, 00784c72] [00784c76, 00784cf7] [00784cfb, 00784d76] [00784d7a, 00784df7] [00784dfb, 00784ea9] [00784ead, 00784f8f] [00784f93, 00784fb6] [00784fba, 00785020] [00785024, 00785128] [0078512c, 0078515d] [00785161, 007851be]]


/* WARNING: Removing unreachable block (ram,0x00785191) */
/* WARNING: Removing unreachable block (ram,0x00785017) */

void FUN_00784be0(int *param_1,char param_2)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  char *pcVar5;
  int _Value;
  char *pcVar6;
  int unaff_ESI;
  uint *puVar7;
  char *pcStack_2a8;
  undefined1 *puStack_2a4;
  uint uStack_294;
  uint uStack_290;
  undefined4 uStack_28c;
  uint uStack_288;
  uint uStack_284;
  uint uStack_280;
  undefined4 uStack_27c;
  int iStack_278;
  char *pcStack_274;
  undefined4 uStack_270;
  uint auStack_26c [2];
  undefined4 uStack_264;
  uint uStack_260;
  undefined4 uStack_25c;
  uint uStack_258;
  undefined4 uStack_250;
  uint uStack_24c;
  undefined4 uStack_248;
  uint uStack_244;
  char *pcStack_240;
  undefined1 local_23c [12];
  undefined4 uStack_230;
  uint local_22c;
  uint local_228;
  undefined4 uStack_224;
  uint uStack_218;
  char acStack_214 [12];
  undefined4 uStack_208;
  uint uStack_204;
  uint uStack_200;
  uint uStack_1fc;
  undefined4 uStack_1f0;
  char acStack_1ec [4];
  uint uStack_1e8;
  uint auStack_1e0 [4];
  undefined4 uStack_1d0;
  uint uStack_1cc;
  undefined1 auStack_1b4 [20];
  undefined1 auStack_1a0 [364];
  undefined1 uStack_34;
  undefined1 uStack_30;
  undefined1 uStack_28;
  undefined1 uStack_20;
  undefined1 uStack_1c;
  undefined3 uStack_1b;
  undefined4 uStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b4b7cf;
  pvStack_14 = ExceptionList;
  piVar4 = *(int **)(DAT_012588e8 + 0xb24);
  puStack_2a4 = (undefined1 *)0xd;
  pcStack_2a8 = "counter_start";
  local_228 = 0xf;
  local_22c = 0;
  local_23c[0] = 0;
  ExceptionList = &pvStack_14;
  FUN_00409350();
  local_c = 0;
  puStack_2a4 = (undefined1 *)0x784c45;
  piVar2 = (int *)(**(code **)(*piVar4 + 0x34))();
  puStack_2a4 = local_23c;
  pcStack_2a8 = (char *)0x784c53;
  (**(code **)(*piVar2 + 0x48))();
  puStack_10 = (undefined1 *)0xffffffff;
  if (0xf < local_22c) {
    pcStack_2a8 = pcStack_240;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  pcStack_2a8 = (char *)0xe;
  local_22c = 0xf;
  uStack_230 = 0;
  pcStack_240 = (char *)((uint)pcStack_240 & 0xffffff00);
  uStack_200 = 0xf;
  uStack_204 = 0;
  acStack_214[0] = '\0';
  FUN_00409350("counter_offset");
  puStack_10 = (undefined1 *)0x1;
  pcStack_2a8 = (char *)0x784cc1;
  piVar2 = (int *)(**(code **)(*piVar4 + 0x34))();
  pcStack_2a8 = acStack_214;
  uVar3 = (**(code **)(*piVar2 + 0x48))();
  pvStack_14 = (void *)0xffffffff;
  if (0xf < uStack_204) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_218);
  }
  uStack_204 = 0xf;
  uStack_208 = 0;
  uStack_218 = uStack_218 & 0xffffff00;
  if (param_2 == '\0') {
    uStack_280 = 0xf;
    uStack_284 = 0;
    uStack_294 = uStack_294 & 0xffffff00;
    FUN_00409350("counter_start2",0xe);
    pvStack_14 = (void *)0x2;
    piVar2 = (int *)(**(code **)(*piVar4 + 0x34))();
    (**(code **)(*piVar2 + 0x48))(&uStack_294);
    uStack_18 = 0xffffffff;
    if (0xf < uStack_284) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uVar3);
    }
    uStack_284 = 0xf;
    uStack_288 = 0;
    acStack_1ec[0] = '\x0f';
    acStack_1ec[1] = '\0';
    acStack_1ec[2] = '\0';
    acStack_1ec[3] = '\0';
    uStack_1f0 = 0;
    uStack_200 = uStack_200 & 0xffffff00;
    FUN_00409350("counter_offset2",0xf);
    uStack_18 = 3;
    piVar4 = (int *)(**(code **)(*piVar4 + 0x34))();
    (**(code **)(*piVar4 + 0x48))(&uStack_200);
    pvStack_14 = (void *)0xffffffff;
    if (0xf < uStack_1e8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_1fc);
    }
    uStack_1e8 = 0xf;
    acStack_1ec[0] = '\0';
    acStack_1ec[1] = '\0';
    acStack_1ec[2] = '\0';
    acStack_1ec[3] = '\0';
    uStack_1fc = uStack_1fc & 0xffffff00;
  }
  pvStack_14 = (void *)0xffffffff;
  iStack_278 = *(int *)(unaff_ESI + 100);
  pcVar6 = *(char **)(unaff_ESI + 0x68);
  pcStack_274 = pcVar6;
  FUN_0098b350(auStack_1a0);
  pvStack_14._1_3_ = 0;
  uVar3 = 0;
  uStack_270 = CONCAT22((short)pcVar6,(undefined2)uStack_270);
  while( true ) {
    pvStack_14._0_1_ = 4;
    uStack_280 = 0xf;
    uStack_284 = 0;
    uStack_294 = uStack_294 & 0xffffff00;
    FUN_00409350("counter",7);
    pvStack_14._0_1_ = 5;
    piVar4 = (int *)(**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x34))();
    piVar4 = (int *)(**(code **)(*piVar4 + 0x7c))(&uStack_294,auStack_1a0);
    _uStack_1c = CONCAT31(uStack_1b,4);
    if (0xf < uStack_288) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uVar3);
    }
    uStack_288 = 0xf;
    uStack_28c = 0;
    (**(code **)(*piVar4 + 0x34))();
    iStack_278 = CONCAT22(iStack_278._2_2_,(short)uStack_280);
    uStack_224 = uStack_27c;
    local_228 = uStack_280;
    piVar4[0x2f] = iStack_278;
    puVar7 = &local_228;
    (**(code **)(*(int *)piVar4[0x25] + 0xcc))();
    uStack_258 = 0xf;
    uStack_25c = 0;
    auStack_26c[0] = auStack_26c[0] & 0xffffff00;
    uStack_20 = 6;
    pcVar5 = __itoa((int)pcStack_2a8,acStack_1ec,10);
    pcStack_274 = pcVar5 + 1;
    pcVar6 = pcVar5;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    FUN_00409350(pcVar5,(int)pcVar6 - (int)pcStack_274);
    uStack_20 = 7;
    _Value = FUN_00988fa0(auStack_26c);
    uStack_20 = 8;
    (**(code **)(*param_1 + 0x58))(_Value,piVar4);
    if (0xf < uStack_244) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_258);
    }
    uStack_28 = 4;
    uStack_244 = 0xf;
    uStack_248 = 0;
    uStack_258 = uStack_258 & 0xffffff00;
    if (0xf < uStack_260) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(pcStack_274);
    }
    uStack_294 = 0xf;
    pcStack_2a8 = (char *)((uint)pcStack_2a8 & 0xffffff00);
    FUN_00409350("counter",7);
    uStack_28 = 9;
    piVar4 = (int *)(**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x34))();
    piVar4 = (int *)(**(code **)(*piVar4 + 0x7c))(&pcStack_2a8,auStack_1b4);
    uStack_30 = 4;
    (**(code **)(*piVar4 + 0x34))();
    uStack_284 = puVar7[0x19];
    pcStack_240 = (char *)(puVar7[0x1a] + uStack_290);
    uStack_280 = uStack_290;
    uStack_288 = CONCAT22((short)pcStack_240,(short)uStack_294);
    uStack_244 = uStack_294;
    piVar4[0x2f] = uStack_288;
    (**(code **)(*(int *)piVar4[0x25] + 0xcc))(&uStack_244);
    auStack_26c[0] = 0xf;
    uStack_270 = 0;
    uStack_280 = uStack_280 & 0xffffff00;
    uStack_34 = 10;
    pcVar5 = __itoa(_Value,(char *)auStack_1e0,10);
    pcVar6 = pcVar5;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    FUN_00409350(pcVar5,(int)pcVar6 - (int)(pcVar5 + 1));
    uStack_34 = 0xb;
    uVar3 = FUN_00988fa0(&uStack_280);
    uStack_34 = 0xc;
    (**(code **)(*param_1 + 0x58))(uVar3,piVar4);
    if (0xf < uStack_1cc) break;
    pvStack_14._0_1_ = 4;
    uStack_1cc = 0xf;
    uStack_1d0 = 0;
    auStack_1e0[0] = auStack_1e0[0] & 0xffffff00;
    if (0xf < uStack_24c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_260);
    }
    iStack_278 = iStack_278 + iRam00000064;
    uStack_264 = uRam00000068;
    uVar3 = 0x10;
    uStack_24c = 0xf;
    uStack_250 = 0;
    uStack_260 = uStack_260 & 0xffffff00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(auStack_1e0[0]);
}

