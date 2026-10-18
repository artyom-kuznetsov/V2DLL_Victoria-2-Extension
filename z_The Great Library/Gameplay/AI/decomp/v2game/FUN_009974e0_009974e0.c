// FUN_009974e0 @ 009974e0 body=[[009974e0, 009976b0] [009976b4, 009977d6]]


void FUN_009974e0(undefined4 param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  uint in_ECX;
  int local_110;
  uint local_10c;
  int *local_108;
  uint local_104;
  undefined1 local_100 [8];
  undefined4 uStack_f8;
  uint uStack_f4;
  uint uStack_f0;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined **appuStack_70 [21];
  undefined1 uStack_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b57b71;
  local_14 = ExceptionList;
  if (param_2 < 0x37) {
    if (param_2 == 0x36) {
      ExceptionList = &local_14;
      FUN_009880e0();
      local_c = 0;
      FUN_0099e770(param_1,local_100,in_ECX - 4);
      FUN_0099e260();
      local_104 = in_ECX;
      do {
        do {
          do {
            if ((*(uint *)(local_110 + 4) <= local_10c) || (local_108 == (int *)0x0)) {
              FUN_0057afc0(local_100);
              FUN_00aaea59(uStack_f8);
              ExceptionList = local_14;
              return;
            }
            piVar5 = (int *)*local_108;
            cVar2 = (**(code **)(*piVar5 + 0x3c))();
            if (cVar2 == '\0') {
              uStack_e0 = 0xf;
              uStack_e4 = 0;
              uStack_f4 = uStack_f4 & 0xffffff00;
              FUN_00409350("graphics.cpp",0xc);
              local_c._0_1_ = 1;
              uVar3 = FUN_004015b0(&uStack_f4,0x4f8,0x1000);
              local_c = CONCAT31(local_c._1_3_,2);
              FUN_00987d50(uVar3,"Failed to load 3d object type = ",0x20,0);
              piVar4 = piVar5 + 2;
              if (0xf < (uint)piVar5[7]) {
                piVar4 = (int *)*piVar4;
              }
              uVar3 = FUN_00418e30(uVar3,piVar4);
              FUN_00401280(uVar3);
              uStack_1c = 1;
              FUN_00987ac0(appuStack_70);
              appuStack_70[0] = std::ios_base::vftable;
              FUN_00aad52d(appuStack_70);
              uStack_1c = 0;
              if (0xf < uStack_f0) {
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b(local_104);
              }
              uStack_f0 = 0xf;
              uStack_f4 = 0;
              local_104 = local_104 & 0xffffff00;
              (**(code **)*piVar5)(1);
            }
            else {
              FUN_008b2480(piVar5);
            }
            local_108 = (int *)local_108[1];
          } while (local_108 != (int *)0x0);
          uVar1 = *(uint *)(local_110 + 4);
          local_10c = local_10c + 1;
        } while (uVar1 <= local_10c);
        piVar5 = (int *)(*(int *)(local_110 + 8) + local_10c * 4);
        do {
          if (*piVar5 != 0) break;
          local_10c = local_10c + 1;
          piVar5 = piVar5 + 1;
        } while (local_10c < uVar1);
        if (local_10c < uVar1) {
          local_108 = *(int **)(*(int *)(local_110 + 8) + local_10c * 4);
        }
      } while( true );
    }
    if (param_2 == 0x1c) {
      ExceptionList = &local_14;
      FUN_0099e810(param_1,in_ECX + 0x84,in_ECX - 4);
      ExceptionList = local_14;
      return;
    }
    if (param_2 == 0x34) {
      ExceptionList = &local_14;
      FUN_0099e770(param_1,in_ECX + 0x9c,in_ECX - 4);
      ExceptionList = local_14;
      return;
    }
  }
  else {
    if (param_2 == 0x52) {
      ExceptionList = &local_14;
      FUN_0099e770(param_1,in_ECX + 0xa8,in_ECX - 4);
      ExceptionList = local_14;
      return;
    }
    if (param_2 == 0x14f) {
      ExceptionList = &local_14;
      FUN_0099e810(param_1,in_ECX + 0x90,in_ECX - 4);
      ExceptionList = local_14;
      return;
    }
  }
  ExceptionList = &local_14;
  FUN_009a0f40();
  ExceptionList = local_14;
  return;
}

