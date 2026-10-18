// FUN_006e2d40 @ 006e2d40 body=[[006e2d40, 006e2db4] [006e2db8, 006e2e6e] [006e2e72, 006e2eb6] [006e2eba, 006e2efe] [006e2f02, 006e2f46] [006e2f4a, 006e2f8e] [006e2f92, 006e2fd6] [006e2fda, 006e301e] [006e3022, 006e3066] [006e306a, 006e30ae] [006e30b2, 006e30f6] [006e30fa, 006e313e] [006e3142, 006e3186] [006e318a, 006e31ce] [006e31d2, 006e3216] [006e321a, 006e325a] [006e325e, 006e32a2] [006e32a6, 006e32ea] [006e32ee, 006e3332] [006e3336, 006e337a] [006e337e, 006e33c2] [006e33c6, 006e340a] [006e340e, 006e3452] [006e3456, 006e3521] [006e3525, 006e3534]]


void FUN_006e2d40(int *param_1,undefined4 param_2,int *param_3,undefined4 param_4,undefined4 param_5
                 )

{
  char cVar1;
  undefined4 uVar2;
  short *psVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *in_ECX;
  char local_68;
  undefined8 local_67;
  undefined8 local_5f;
  undefined8 local_57;
  undefined4 local_4f;
  undefined2 local_4b;
  undefined1 local_49;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b44720;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  in_ECX[0x6f] = param_5;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("factory_info",0xc);
  local_8 = 0;
  uVar2 = (**(code **)(*param_1 + 0x2c))(local_2c,param_2);
  local_8 = 0xffffffff;
  *in_ECX = uVar2;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_68 = '\0';
  local_67 = 0;
  local_5f = 0;
  local_57 = 0;
  local_4f = 0;
  local_4b = 0;
  local_49 = 0;
  _sprintf(&local_68,"fac_info_%i",param_4);
  psVar3 = (short *)(**(code **)(*(int *)*in_ECX + 0x60))(&param_5);
  (**(code **)(*(int *)*in_ECX + 0x18))(*psVar3 * (short)param_4);
  pcVar4 = &local_68;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(&local_68,(int)pcVar4 - (int)&local_67);
  local_8 = 1;
  (**(code **)(*param_3 + 0xbc))(local_2c,*in_ECX);
  local_8 = 0xffffffff;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("level",5);
  local_8 = 2;
  uVar2 = (**(code **)(*(int *)*in_ECX + 0x3c))(local_2c);
  local_8 = 0xffffffff;
  in_ECX[2] = uVar2;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("income",6);
  local_8 = 3;
  uVar2 = (**(code **)(*(int *)*in_ECX + 0x3c))(local_2c);
  local_8 = 0xffffffff;
  in_ECX[4] = uVar2;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("income_icon",0xb);
  local_8 = 4;
  uVar2 = (**(code **)(*(int *)*in_ECX + 0x44))(local_2c);
  local_8 = 0xffffffff;
  in_ECX[3] = uVar2;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("input_0",7);
  local_8 = 5;
  uVar2 = (**(code **)(*(int *)*in_ECX + 0x44))(local_2c);
  local_8 = 0xffffffff;
  in_ECX[5] = uVar2;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("input_1",7);
  local_8 = 6;
  uVar2 = (**(code **)(*(int *)*in_ECX + 0x44))(local_2c);
  local_8 = 0xffffffff;
  in_ECX[6] = uVar2;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("input_2",7);
  local_8 = 7;
  uVar2 = (**(code **)(*(int *)*in_ECX + 0x44))(local_2c);
  local_8 = 0xffffffff;
  in_ECX[7] = uVar2;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("input_3",7);
  local_8 = 8;
  uVar2 = (**(code **)(*(int *)*in_ECX + 0x44))(local_2c);
  local_8 = 0xffffffff;
  in_ECX[8] = uVar2;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("input_0_lack2",0xd);
  local_8 = 9;
  uVar2 = (**(code **)(*(int *)*in_ECX + 0x44))(local_2c);
  local_8 = 0xffffffff;
  in_ECX[9] = uVar2;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("input_1_lack2",0xd);
  local_8 = 10;
  uVar2 = (**(code **)(*(int *)*in_ECX + 0x44))(local_2c);
  local_8 = 0xffffffff;
  in_ECX[10] = uVar2;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("input_2_lack2",0xd);
  local_8 = 0xb;
  uVar2 = (**(code **)(*(int *)*in_ECX + 0x44))(local_2c);
  local_8 = 0xffffffff;
  in_ECX[0xb] = uVar2;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("input_3_lack2",0xd);
  local_8 = 0xc;
  uVar2 = (**(code **)(*(int *)*in_ECX + 0x44))(local_2c);
  local_8 = 0xffffffff;
  in_ECX[0xc] = uVar2;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("output",6);
  local_8 = 0xd;
  uVar2 = (**(code **)(*(int *)*in_ECX + 0x34))(local_2c);
  local_8 = 0xffffffff;
  in_ECX[0xd] = uVar2;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("open_close",10);
  local_8 = 0xe;
  uVar2 = (**(code **)(*(int *)*in_ECX + 0x34))(local_2c);
  local_8 = 0xffffffff;
  in_ECX[0x10] = uVar2;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("subsidise",9);
  local_8 = 0xf;
  uVar2 = (**(code **)(*(int *)*in_ECX + 0x34))(local_2c);
  local_8 = 0xffffffff;
  in_ECX[0x11] = uVar2;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("delete_factory",0xe);
  local_8 = 0x10;
  uVar2 = (**(code **)(*(int *)*in_ECX + 0x34))(local_2c);
  local_8 = 0xffffffff;
  in_ECX[0x14] = uVar2;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("priority",8);
  local_8 = 0x11;
  uVar2 = (**(code **)(*(int *)*in_ECX + 0x34))(local_2c);
  local_8 = 0xffffffff;
  in_ECX[0x12] = uVar2;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("upgrade",7);
  local_8 = 0x12;
  uVar2 = (**(code **)(*(int *)*in_ECX + 0x34))(local_2c);
  local_8 = 0xffffffff;
  in_ECX[0x13] = uVar2;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("upgrade_factory_progress",0x18);
  local_8 = 0x13;
  uVar2 = (**(code **)(*(int *)*in_ECX + 0x44))(local_2c);
  local_8 = 0xffffffff;
  in_ECX[0x15] = uVar2;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("build_factory_progress",0x16);
  local_8 = 0x14;
  uVar2 = (**(code **)(*(int *)*in_ECX + 0x44))(local_2c);
  local_8 = 0xffffffff;
  in_ECX[0x16] = uVar2;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("prod_factory_inprogress_bg",0x1a);
  local_8 = 0x15;
  uVar2 = (**(code **)(*(int *)*in_ECX + 0x44))(local_2c);
  local_8 = 0xffffffff;
  in_ECX[0xf] = uVar2;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("employment_ratio",0x10);
  local_8 = 0x16;
  uVar2 = (**(code **)(*(int *)*in_ECX + 0x44))(local_2c);
  local_8 = 0xffffffff;
  in_ECX[0xe] = uVar2;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  (**(code **)(*(int *)(in_ECX[0xd] + 0x54) + 4))(in_ECX + 0x2d);
  (**(code **)(*(int *)(in_ECX[0x10] + 0x54) + 4))(in_ECX + 0x17);
  (**(code **)(*(int *)(in_ECX[0x11] + 0x54) + 4))(in_ECX + 0x22);
  (**(code **)(*(int *)(in_ECX[0x14] + 0x54) + 4))(in_ECX + 0x4e);
  (**(code **)(*(int *)(in_ECX[0x12] + 0x54) + 4))(in_ECX + 0x38);
  (**(code **)(*(int *)(in_ECX[0x13] + 0x54) + 4))(in_ECX + 0x43);
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  FUN_00409350("prod_cancel_progress",0x14);
  local_8 = 0x17;
  iVar5 = (**(code **)(*(int *)*in_ECX + 0x34))(local_48);
  (**(code **)(*(int *)(iVar5 + 0x54) + 4))(in_ECX + 0x4e);
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  ExceptionList = local_10;
  return;
}

