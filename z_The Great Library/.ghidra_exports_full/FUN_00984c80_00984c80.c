// FUN_00984c80 @ 00984c80 body=[[00984c80, 00984cbe] [00984cc0, 00984d9c] [00984da0, 00984e4e] [00984e52, 00984e77]]


void FUN_00984c80(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  undefined **local_34;
  int local_30;
  undefined8 local_2c;
  undefined8 local_24;
  undefined1 local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b41e78;
  local_10 = ExceptionList;
  if ((param_1 != param_2) && (piVar8 = param_1 + 0x11, piVar8 != param_2)) {
    piVar7 = param_1 + 0x1d;
    ExceptionList = &local_10;
    do {
      local_8 = 0xffffffff;
      iVar2 = piVar7[-10];
      iVar3 = *piVar8;
      iVar1 = piVar7[-0xb];
      local_3c = 0xf;
      local_40 = 0;
      local_50[0] = local_50[0] & 0xffffff00;
      local_14 = piVar8;
      FUN_00408ed0(piVar7 + -9,0,0xffffffff);
      local_2c = *(undefined8 *)piVar7;
      local_30 = piVar7[-1];
      local_1c = (undefined1)piVar7[4];
      local_24 = *(undefined8 *)(piVar7 + 2);
      local_34 = CColor::vftable;
      local_8 = 0;
      if (*param_1 < iVar3) {
        FUN_00985100(param_1,piVar7 + 5,param_1);
        *param_1 = iVar3;
        param_1[1] = iVar1;
        param_1[2] = iVar2;
        FUN_00408ed0(local_50,0,0xffffffff);
        *(undefined8 *)(param_1 + 0xc) = local_2c;
        param_1[0xb] = local_30;
        *(undefined8 *)(param_1 + 0xe) = local_24;
        *(undefined1 *)(param_1 + 0x10) = local_1c;
      }
      else {
        iVar4 = piVar7[-0x1d];
        piVar6 = piVar7 + -0x1d;
        piVar5 = piVar7;
        while (local_18 = piVar6, iVar4 < iVar3) {
          *piVar8 = iVar4;
          piVar8[1] = piVar5[-0x1c];
          piVar8[2] = piVar5[-0x1b];
          FUN_00408ed0(piVar5 + -0x1a,0,0xffffffff);
          piVar8[0xb] = piVar5[-0x12];
          *(undefined8 *)(piVar8 + 0xc) = *(undefined8 *)(piVar5 + -0x11);
          *(undefined8 *)(piVar8 + 0xe) = *(undefined8 *)(piVar5 + -0xf);
          *(char *)(piVar8 + 0x10) = (char)piVar5[-0xd];
          piVar6 = local_18 + -0x11;
          piVar5 = piVar5 + -0x11;
          piVar8 = local_18;
          iVar4 = local_18[-0x11];
        }
        *piVar8 = iVar3;
        piVar8[2] = iVar2;
        piVar8[1] = iVar1;
        FUN_00408ed0(local_50,0,0xffffffff);
        *(undefined8 *)(piVar8 + 0xc) = local_2c;
        piVar8[0xb] = local_30;
        *(undefined8 *)(piVar8 + 0xe) = local_24;
        *(undefined1 *)(piVar8 + 0x10) = local_1c;
      }
      local_8 = 0xffffffff;
      if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_50[0]);
      }
      piVar8 = local_14 + 0x11;
      piVar7 = piVar7 + 0x11;
    } while (piVar8 != param_2);
  }
  ExceptionList = local_10;
  return;
}

