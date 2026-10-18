// FUN_004f8340 @ 004f8340 body=[[004f8340, 004f83ac] [004f83bb, 004f8448] [004f8452, 004f849a] [004f84a4, 004f84f9] [004f8504, 004f85a8] [004f85b2, 004f85dd] [004f85e1, 004f8614] [004f8623, 004f865b] [004f865f, 004f8685] [004f8689, 004f86aa] [004f86ae, 004f86cf] [004f86d3, 004f86f4] [004f86f8, 004f8719] [004f871d, 004f873e] [004f8742, 004f8763] [004f8767, 004f8788] [004f878c, 004f87ad] [004f87b1, 004f87d2] [004f87d6, 004f880b] [004f8812, 004f882c] [004f8830, 004f8851] [004f8855, 004f888d] [004f8894, 004f88b3] [004f88b7, 004f88ed] [004f88f4, 004f8913] [004f8917, 004f893b] [004f8945, 004f8969] [004f8973, 004f8994] [004f8998, 004f89b9] [004f89bd, 004f89eb] [004f89ef, 004f8a3c] [004f8a40, 004f8a61] [004f8a65, 004f8a86] [004f8a8a, 004f8aab] [004f8aaf, 004f8ad0] [004f8ad4, 004f8af5] [004f8af9, 004f8b1a] [004f8b1e, 004f8b3f] [004f8b43, 004f8b64] [004f8b68, 004f8b89] [004f8b8d, 004f8bae] [004f8bb2, 004f8bd3] [004f8bd7, 004f8bf8] [004f8bfc, 004f8c1d] [004f8c21, 004f8c42] [004f8c46, 004f8c67] [004f8c6b, 004f8c8f] [004f8c99, 004f8cbd] [004f8cc7, 004f8ce8] [004f8cec, 004f8d0d] [004f8d11, 004f8d32] [004f8d36, 004f8d57] [004f8d5b, 004f8d7c] [004f8d80, 004f8da1] [004f8da5, 004f8dc6] [004f8dca, 004f8deb] [004f8def, 004f8e10] [004f8e14, 004f8e35] [004f8e39, 004f8e5a] [004f8e5e, 004f8e7f] [004f8e83, 004f8ea4] [004f8ea8, 004f8ec9] [004f8ecd, 004f8eee] [004f8ef2, 004f8f18] [004f8f22, 004f8f48] [004f8f4c, 004f8f78] [004f8f7c, 004f8f9e] [004f8fa2, 004f8fc8] [004f8fd2, 004f9019] [004f9023, 004f9048] [004f9052, 004f9078] [004f9082, 004f90a8] [004f90b2, 004f90e9] [004f90ed, 004f911e] [004f9122, 004f9159] [004f915d, 004f9197] [004f919b, 004f91bc] [004f91c0, 004f91e1] [004f91e5, 004f9206] [004f920a, 004f922b] [004f922f, 004f9250] [004f9254, 004f9275] [004f9279, 004f929a] [004f929e, 004f92bf] [004f92c3, 004f92e4] [004f92e8, 004f9309] [004f930d, 004f9338] [004f9342, 004f9368] [004f9372, 004f9398] [004f939c, 004f93c8] [004f93d2, 004f93f8] [004f93fc, 004f9426] [004f942a, 004f9454] [004f9458, 004f9482] [004f9486, 004f94bb] [004f94bf, 004f94e9] [004f94ed, 004f9517] [004f951b, 004f9545] [004f9549, 004f9616] [004f961a, 004f9649] [004f964d, 004f966e] [004f9672, 004f96b0] [004f96b4, 004f970c] [004f9710, 004f9739] [004f973d, 004f9775] [004f9779, 004f9794]]


void FUN_004f8340(undefined4 *param_1)

{
  void *_Dst;
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b53a5a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = CCountry::vftable;
  local_8 = 0x77;
  iVar3 = param_1[0x19];
  if (iVar3 != 0) {
    local_8._0_1_ = 0x78;
    local_8._1_3_ = 0;
    FUN_0093d690();
    local_8._0_1_ = 0x79;
    FUN_00445600(**(undefined4 **)(iVar3 + 8),*(undefined4 **)(iVar3 + 8));
    local_8 = CONCAT31(local_8._1_3_,0x77);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(iVar3 + 8));
  }
  iVar3 = 0;
  if (0 < (int)(param_1[0x48e] - param_1[0x48d] & 0xfffffffc)) {
    do {
      puVar5 = *(undefined4 **)(param_1[0x48d] + iVar3 * 4);
      if (puVar5 != (undefined4 *)0x0) {
        (**(code **)*puVar5)(1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)(param_1[0x48e] - param_1[0x48d]) >> 2);
  }
  if (param_1[0x6d] != 0) {
    FUN_0043c6a0(param_1[0x6d],0);
  }
  (**(code **)(param_1[0x6c] + 0x1c))(param_1[0x6d]);
  param_1[0x6d] = 0;
  if (param_1[0x71] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x71]);
  }
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x6f] = 0;
  (**(code **)(param_1[0x77] + 0x1c))(param_1[0x78]);
  param_1[0x78] = 0;
  if (param_1[0x7c] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x7c]);
  }
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7a] = 0;
  FUN_0085ac70();
  FUN_0085ac70();
  piVar4 = (int *)param_1[0x2f5];
  if (piVar4 != (int *)0x0) {
    if ((undefined4 *)*piVar4 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar4)(1);
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(piVar4);
  }
  param_1[0x2f5] = 0;
  param_1[0x2f6] = 0;
  param_1[0x2f7] = 0;
  piVar4 = (int *)param_1[0x2fa];
  iVar3 = param_1[0x2fb] - (int)piVar4 >> 2;
  if (iVar3 != 0) {
    piVar1 = piVar4 + iVar3;
    for (; piVar4 != piVar1; piVar4 = piVar4 + 1) {
      if ((undefined4 *)*piVar4 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar4)(1);
      }
    }
  }
  _Dst = (void *)param_1[0x2fa];
  if (_Dst != (void *)param_1[0x2fb]) {
    FID_conflict__memcpy(_Dst,(void *)param_1[0x2fb],0);
    param_1[0x2fb] = _Dst;
  }
  FUN_00549a80(param_1 + 0x44);
  FUN_0057afc0(param_1 + 0x44);
  if (param_1[0x21] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x21]);
  }
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  iVar3 = param_1[0x43];
  if (iVar3 != 0) {
    if (*(int *)(iVar3 + 0x18) == 0) {
      *(undefined4 *)(iVar3 + 0x18) = 0;
      *(undefined4 *)(iVar3 + 0x1c) = 0;
      *(undefined4 *)(iVar3 + 0x20) = 0;
      local_8._0_1_ = 0x7a;
      FUN_00456d20(**(undefined4 **)(iVar3 + 0xc),*(undefined4 **)(iVar3 + 0xc));
      local_8 = CONCAT31(local_8._1_3_,0x77);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*(undefined4 *)(iVar3 + 0xc));
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(iVar3 + 0x18));
  }
  if ((undefined4 *)param_1[0x2f3] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x2f3])(1);
  }
  if ((undefined4 *)param_1[0x3a2] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x3a2])(1);
  }
  if (0xf < (uint)param_1[0x580]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x57b]);
  }
  param_1[0x580] = 0xf;
  param_1[0x57f] = 0;
  *(undefined1 *)(param_1 + 0x57b) = 0;
  if (param_1[0x577] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x577]);
  }
  param_1[0x577] = 0;
  param_1[0x578] = 0;
  param_1[0x579] = 0;
  if (param_1[0x573] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x573]);
  }
  param_1[0x573] = 0;
  param_1[0x574] = 0;
  param_1[0x575] = 0;
  if (param_1[0x56b] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x56b]);
  }
  param_1[0x56b] = 0;
  param_1[0x56c] = 0;
  param_1[0x56d] = 0;
  if (param_1[0x564] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x564]);
  }
  param_1[0x564] = 0;
  param_1[0x565] = 0;
  param_1[0x566] = 0;
  if (param_1[0x560] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x560]);
  }
  param_1[0x560] = 0;
  param_1[0x561] = 0;
  param_1[0x562] = 0;
  if (param_1[0x55c] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x55c]);
  }
  param_1[0x55c] = 0;
  param_1[0x55d] = 0;
  param_1[0x55e] = 0;
  if (param_1[0x553] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x553]);
  }
  param_1[0x553] = 0;
  param_1[0x554] = 0;
  param_1[0x555] = 0;
  if (param_1[0x549] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x549]);
  }
  param_1[0x549] = 0;
  param_1[0x54a] = 0;
  param_1[0x54b] = 0;
  if (param_1[0x545] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x545]);
  }
  param_1[0x545] = 0;
  param_1[0x546] = 0;
  param_1[0x547] = 0;
  if (param_1[0x541] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x541]);
  }
  param_1[0x541] = 0;
  param_1[0x542] = 0;
  param_1[0x543] = 0;
  piVar4 = (int *)param_1[0x53d];
  if (piVar4 != (int *)0x0) {
    piVar1 = (int *)param_1[0x53e];
    while( true ) {
      if (piVar4 == piVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(param_1[0x53d]);
      }
      if (*piVar4 != 0) break;
      *piVar4 = 0;
      piVar4[1] = 0;
      piVar4[2] = 0;
      piVar4 = piVar4 + 4;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*piVar4);
  }
  param_1[0x53d] = 0;
  param_1[0x53e] = 0;
  param_1[0x53f] = 0;
  if (param_1[0x539] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x539]);
  }
  param_1[0x539] = 0;
  param_1[0x53a] = 0;
  param_1[0x53b] = 0;
  puVar5 = (undefined4 *)param_1[0x52f];
  if (puVar5 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)param_1[0x530];
    while( true ) {
      if (puVar5 == puVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(param_1[0x52f]);
      }
      if (0xf < (uint)puVar5[5]) break;
      puVar5[5] = 0xf;
      puVar5[4] = 0;
      *(undefined1 *)puVar5 = 0;
      puVar5 = puVar5 + 7;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*puVar5);
  }
  param_1[0x52f] = 0;
  param_1[0x530] = 0;
  param_1[0x531] = 0;
  puVar5 = (undefined4 *)param_1[0x52b];
  if (puVar5 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)param_1[0x52c];
    while( true ) {
      if (puVar5 == puVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(param_1[0x52b]);
      }
      if (0xf < (uint)puVar5[5]) break;
      puVar5[5] = 0xf;
      puVar5[4] = 0;
      *(undefined1 *)puVar5 = 0;
      puVar5 = puVar5 + 7;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*puVar5);
  }
  param_1[0x52b] = 0;
  param_1[0x52c] = 0;
  param_1[0x52d] = 0;
  if (param_1[0x527] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x527]);
  }
  param_1[0x527] = 0;
  param_1[0x528] = 0;
  param_1[0x529] = 0;
  if (param_1[0x523] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x523]);
  }
  param_1[0x523] = 0;
  param_1[0x524] = 0;
  param_1[0x525] = 0;
  if (param_1[0x506] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x506]);
  }
  param_1[0x506] = 0;
  param_1[0x507] = 0;
  param_1[0x508] = 0;
  if (param_1[0x4fc] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x4fc]);
  }
  param_1[0x4fc] = 0;
  param_1[0x4fd] = 0;
  param_1[0x4fe] = 0;
  FUN_0096b900();
  if (param_1[0x4b5] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x4b5]);
  }
  param_1[0x4b5] = 0;
  param_1[0x4b6] = 0;
  param_1[0x4b7] = 0;
  local_8._0_1_ = 0x61;
  puVar5 = (undefined4 *)param_1[0x4a8];
  if (puVar5 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)param_1[0x4a9];
    for (; puVar5 != puVar2; puVar5 = puVar5 + 6) {
      (**(code **)*puVar5)(0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x4a8]);
  }
  param_1[0x4a8] = 0;
  param_1[0x4a9] = 0;
  param_1[0x4aa] = 0;
  if (param_1[0x4a3] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x4a3]);
  }
  param_1[0x4a3] = 0;
  param_1[0x4a4] = 0;
  param_1[0x4a5] = 0;
  if (param_1[0x48d] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x48d]);
  }
  param_1[0x48d] = 0;
  param_1[0x48e] = 0;
  param_1[0x48f] = 0;
  if (param_1[0x489] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x489]);
  }
  param_1[0x489] = 0;
  param_1[0x48a] = 0;
  param_1[0x48b] = 0;
  if (param_1[0x473] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x473]);
  }
  param_1[0x473] = 0;
  param_1[0x474] = 0;
  param_1[0x475] = 0;
  if (param_1[0x45d] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x45d]);
  }
  param_1[0x45d] = 0;
  param_1[0x45e] = 0;
  param_1[0x45f] = 0;
  if (param_1[0x447] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x447]);
  }
  param_1[0x447] = 0;
  param_1[0x448] = 0;
  param_1[0x449] = 0;
  if (param_1[0x431] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x431]);
  }
  param_1[0x431] = 0;
  param_1[0x432] = 0;
  param_1[0x433] = 0;
  if (param_1[0x41b] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x41b]);
  }
  param_1[0x41b] = 0;
  param_1[0x41c] = 0;
  param_1[0x41d] = 0;
  if (param_1[0x405] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x405]);
  }
  param_1[0x405] = 0;
  param_1[0x406] = 0;
  param_1[0x407] = 0;
  if (param_1[0x3ef] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x3ef]);
  }
  param_1[0x3ef] = 0;
  param_1[0x3f0] = 0;
  param_1[0x3f1] = 0;
  if (param_1[0x3d9] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x3d9]);
  }
  param_1[0x3d9] = 0;
  param_1[0x3da] = 0;
  param_1[0x3db] = 0;
  if (param_1[0x3c3] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x3c3]);
  }
  param_1[0x3c3] = 0;
  param_1[0x3c4] = 0;
  param_1[0x3c5] = 0;
  if (param_1[0x3ad] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x3ad]);
  }
  param_1[0x3ad] = 0;
  param_1[0x3ae] = 0;
  param_1[0x3af] = 0;
  if (param_1[0x3a9] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x3a9]);
  }
  param_1[0x3a9] = 0;
  param_1[0x3aa] = 0;
  param_1[0x3ab] = 0;
  if (param_1[0x3a3] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x3a3]);
  }
  param_1[0x3a3] = 0;
  param_1[0x3a4] = 0;
  param_1[0x3a5] = 0;
  if (param_1[0x395] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x395]);
  }
  param_1[0x395] = 0;
  param_1[0x396] = 0;
  param_1[0x397] = 0;
  if (param_1[0x391] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x391]);
  }
  param_1[0x391] = 0;
  param_1[0x392] = 0;
  param_1[0x393] = 0;
  if (param_1[0x38b] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x38b]);
  }
  param_1[0x38b] = 0;
  param_1[0x38c] = 0;
  param_1[0x38d] = 0;
  if (param_1[0x385] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x385]);
  }
  param_1[0x385] = 0;
  param_1[0x386] = 0;
  param_1[0x387] = 0;
  if (param_1[0x380] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x380]);
  }
  param_1[0x380] = 0;
  param_1[0x381] = 0;
  param_1[0x382] = 0;
  if (param_1[0x36e] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x36e]);
  }
  param_1[0x36e] = 0;
  param_1[0x36f] = 0;
  param_1[0x370] = 0;
  if (param_1[0x36a] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x36a]);
  }
  param_1[0x36a] = 0;
  param_1[0x36b] = 0;
  param_1[0x36c] = 0;
  if (param_1[0x366] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x366]);
  }
  param_1[0x366] = 0;
  param_1[0x367] = 0;
  param_1[0x368] = 0;
  if (param_1[0x362] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x362]);
  }
  param_1[0x362] = 0;
  param_1[0x363] = 0;
  param_1[0x364] = 0;
  if (param_1[0x35e] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x35e]);
  }
  param_1[0x35e] = 0;
  param_1[0x35f] = 0;
  param_1[0x360] = 0;
  if (param_1[0x35a] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x35a]);
  }
  param_1[0x35a] = 0;
  param_1[0x35b] = 0;
  param_1[0x35c] = 0;
  if (param_1[0x356] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x356]);
  }
  param_1[0x356] = 0;
  param_1[0x357] = 0;
  param_1[0x358] = 0;
  if (param_1[0x352] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x352]);
  }
  param_1[0x352] = 0;
  param_1[0x353] = 0;
  param_1[0x354] = 0;
  if (param_1[0x34e] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x34e]);
  }
  param_1[0x34e] = 0;
  param_1[0x34f] = 0;
  param_1[0x350] = 0;
  if (param_1[0x34a] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x34a]);
  }
  param_1[0x34a] = 0;
  param_1[0x34b] = 0;
  param_1[0x34c] = 0;
  if (param_1[0x346] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x346]);
  }
  param_1[0x346] = 0;
  param_1[0x347] = 0;
  param_1[0x348] = 0;
  if (param_1[0x342] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x342]);
  }
  param_1[0x342] = 0;
  param_1[0x343] = 0;
  param_1[0x344] = 0;
  if (param_1[0x339] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x339]);
  }
  param_1[0x339] = 0;
  param_1[0x33a] = 0;
  param_1[0x33b] = 0;
  if (0xf < (uint)param_1[0x335]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x330]);
  }
  param_1[0x335] = 0xf;
  param_1[0x334] = 0;
  *(undefined1 *)(param_1 + 0x330) = 0;
  if (0xf < (uint)param_1[0x32e]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x329]);
  }
  param_1[0x32e] = 0xf;
  param_1[0x32d] = 0;
  *(undefined1 *)(param_1 + 0x329) = 0;
  if (param_1[0x2fa] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x2fa]);
  }
  param_1[0x2fa] = 0;
  param_1[0x2fb] = 0;
  param_1[0x2fc] = 0;
  if (param_1[0x2f5] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x2f5]);
  }
  param_1[0x2f5] = 0;
  param_1[0x2f6] = 0;
  param_1[0x2f7] = 0;
  FUN_0048d070();
  FUN_0044be00();
  FUN_0044be00();
  if (param_1[0x28e] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x28e]);
  }
  param_1[0x28e] = 0;
  param_1[0x28f] = 0;
  param_1[0x290] = 0;
  if (param_1[0x28a] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x28a]);
  }
  param_1[0x28a] = 0;
  param_1[0x28b] = 0;
  param_1[0x28c] = 0;
  if (param_1[0x286] == 0) {
    param_1[0x286] = 0;
    param_1[0x287] = 0;
    param_1[0x288] = 0;
    if (param_1[0x282] != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(param_1[0x282]);
    }
    param_1[0x282] = 0;
    param_1[0x283] = 0;
    param_1[0x284] = 0;
    FUN_00849e90();
    FUN_00849e90();
    if (param_1[0x276] != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(param_1[0x276]);
    }
    param_1[0x276] = 0;
    param_1[0x277] = 0;
    param_1[0x278] = 0;
    local_8._0_1_ = 0x31;
    FUN_005eda70(param_1 + 0x26d);
    if (param_1[0x269] != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(param_1[0x269]);
    }
    param_1[0x269] = 0;
    param_1[0x26a] = 0;
    param_1[0x26b] = 0;
    if (param_1[0x265] != 0) {
      FUN_00463b30(param_1[0x266],param_1);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(param_1[0x265]);
    }
    param_1[0x265] = 0;
    param_1[0x266] = 0;
    param_1[0x267] = 0;
    local_8._0_1_ = 0x2e;
    _eh_vector_destructor_iterator_(param_1 + 0x250,0x1c,3,FUN_004010c0);
    if (param_1[0x244] != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(param_1[0x244]);
    }
    param_1[0x244] = 0;
    param_1[0x245] = 0;
    param_1[0x246] = 0;
    if (param_1[0x240] != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(param_1[0x240]);
    }
    param_1[0x240] = 0;
    param_1[0x241] = 0;
    param_1[0x242] = 0;
    if (param_1[0x23a] != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(param_1[0x23a]);
    }
    param_1[0x23a] = 0;
    param_1[0x23b] = 0;
    param_1[0x23c] = 0;
    if (param_1[0x236] != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(param_1[0x236]);
    }
    param_1[0x236] = 0;
    param_1[0x237] = 0;
    param_1[0x238] = 0;
    if (param_1[0x230] != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(param_1[0x230]);
    }
    param_1[0x230] = 0;
    param_1[0x231] = 0;
    param_1[0x232] = 0;
    if (param_1[0x228] != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(param_1[0x228]);
    }
    param_1[0x228] = 0;
    param_1[0x229] = 0;
    param_1[0x22a] = 0;
    if (param_1[0x224] != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(param_1[0x224]);
    }
    param_1[0x224] = 0;
    param_1[0x225] = 0;
    param_1[0x226] = 0;
    if (param_1[0x220] != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(param_1[0x220]);
    }
    param_1[0x220] = 0;
    param_1[0x221] = 0;
    param_1[0x222] = 0;
    if (param_1[0x21c] != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(param_1[0x21c]);
    }
    param_1[0x21c] = 0;
    param_1[0x21d] = 0;
    param_1[0x21e] = 0;
    if (param_1[0x218] != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(param_1[0x218]);
    }
    param_1[0x218] = 0;
    param_1[0x219] = 0;
    param_1[0x21a] = 0;
    if (param_1[0x214] != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(param_1[0x214]);
    }
    param_1[0x214] = 0;
    param_1[0x215] = 0;
    param_1[0x216] = 0;
    if (param_1[0x20f] != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(param_1[0x20f]);
    }
    param_1[0x20f] = 0;
    param_1[0x210] = 0;
    param_1[0x211] = 0;
    if (param_1[0x20b] != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(param_1[0x20b]);
    }
    param_1[0x20b] = 0;
    param_1[0x20c] = 0;
    param_1[0x20d] = 0;
    if (0xf < (uint)param_1[0x209]) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(param_1[0x204]);
    }
    param_1[0x209] = 0xf;
    param_1[0x208] = 0;
    *(undefined1 *)(param_1 + 0x204) = 0;
    FUN_0044be00();
    if (param_1[0x1ed] != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(param_1[0x1ed]);
    }
    param_1[0x1ed] = 0;
    param_1[0x1ee] = 0;
    param_1[0x1ef] = 0;
    if (0xf < (uint)param_1[0x1eb]) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(param_1[0x1e6]);
    }
    param_1[0x1eb] = 0xf;
    param_1[0x1ea] = 0;
    *(undefined1 *)(param_1 + 0x1e6) = 0;
    FUN_0044be00();
    if (0xf < (uint)param_1[0x1d8]) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(param_1[0x1d3]);
    }
    param_1[0x1d8] = 0xf;
    param_1[0x1d7] = 0;
    *(undefined1 *)(param_1 + 0x1d3) = 0;
    FUN_0044be00();
    if (0xf < (uint)param_1[0x1c5]) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(param_1[0x1c0]);
    }
    param_1[0x1c5] = 0xf;
    param_1[0x1c4] = 0;
    *(undefined1 *)(param_1 + 0x1c0) = 0;
    FUN_0044be00();
    if (0xf < (uint)param_1[0x1b2]) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(param_1[0x1ad]);
    }
    param_1[0x1b2] = 0xf;
    param_1[0x1b1] = 0;
    *(undefined1 *)(param_1 + 0x1ad) = 0;
    FUN_0044be00();
    FUN_009a63f0();
    if (0xf < (uint)param_1[0x194]) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(param_1[399]);
    }
    param_1[0x194] = 0xf;
    param_1[0x193] = 0;
    *(undefined1 *)(param_1 + 399) = 0;
    FUN_0044be00();
    if (0xf < (uint)param_1[0x181]) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(param_1[0x17c]);
    }
    param_1[0x181] = 0xf;
    param_1[0x180] = 0;
    *(undefined1 *)(param_1 + 0x17c) = 0;
    FUN_0044be00();
    if (0xf < (uint)param_1[0x16e]) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(param_1[0x169]);
    }
    param_1[0x16e] = 0xf;
    param_1[0x16d] = 0;
    *(undefined1 *)(param_1 + 0x169) = 0;
    FUN_0044be00();
    if (0xf < (uint)param_1[0x15b]) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(param_1[0x156]);
    }
    param_1[0x15b] = 0xf;
    param_1[0x15a] = 0;
    *(undefined1 *)(param_1 + 0x156) = 0;
    FUN_0044be00();
    FUN_009a63f0();
    FUN_009a63f0();
    FUN_009a63f0();
    FUN_009a63f0();
    FUN_009a63f0();
    FUN_004f82d0();
    local_8._0_1_ = 0x11;
    FUN_0085a6f0();
    local_8._0_1_ = 0x10;
    FUN_0085a6f0();
    local_8._0_1_ = 0xf;
    FUN_0047d720(param_1 + 0x77);
    param_1[0x6c] = CFlags::vftable;
    param_1[0x75] = CFlags::vftable;
    local_8._0_1_ = 0x7b;
    FUN_0043c390();
    local_8._0_1_ = 0xe;
    FUN_0043c580();
    if (param_1[0x61] != 0) {
      FUN_00413860();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(param_1[0x61]);
    }
    param_1[0x61] = 0;
    param_1[0x62] = 0;
    param_1[99] = 0;
    FUN_004097a0(param_1 + 0x5d);
    if (param_1[0x54] != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(param_1[0x54]);
    }
    param_1[0x54] = 0;
    param_1[0x55] = 0;
    param_1[0x56] = 0;
    if (param_1[0x50] != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(param_1[0x50]);
    }
    param_1[0x50] = 0;
    param_1[0x51] = 0;
    param_1[0x52] = 0;
    FUN_0057afc0(param_1 + 0x44);
    FUN_00aaea59(param_1[0x46]);
    if (0xf < (uint)param_1[0x41]) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(param_1[0x3c]);
    }
    param_1[0x41] = 0xf;
    param_1[0x40] = 0;
    *(undefined1 *)(param_1 + 0x3c) = 0;
    local_8._0_1_ = 7;
    _eh_vector_destructor_iterator_(param_1 + 0x34,0x10,2,FUN_00aa8540);
    local_8._0_1_ = 6;
    _eh_vector_destructor_iterator_(param_1 + 0x2c,0x10,2,FUN_00aa8540);
    if (param_1[0x28] == 0) {
      param_1[0x28] = 0;
      param_1[0x29] = 0;
      param_1[0x2a] = 0;
      FUN_009a63f0();
      if (param_1[0x1a] != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(param_1[0x1a]);
      }
      param_1[0x1a] = 0;
      param_1[0x1b] = 0;
      param_1[0x1c] = 0;
      FUN_0042b9f0(param_1 + 0x15);
      local_8._0_1_ = 1;
      FUN_004be320(param_1 + 0x11);
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_004be320(param_1 + 0xd);
      if (param_1[2] == 0) {
        param_1[2] = 0;
        param_1[3] = 0;
        param_1[4] = 0;
        ExceptionList = local_10;
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(param_1[2]);
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x28]);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(param_1[0x286]);
}

