// FUN_0099d2f0 @ 0099d2f0 body=[[0099d2f0, 0099d3c1]]


void FUN_0099d2f0(void)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *puVar4;
  int local_10;
  uint local_c;
  undefined4 *local_8;
  
  FUN_0099e260();
  uVar3 = local_c;
  puVar4 = local_8;
  do {
    do {
      do {
        if ((*(uint *)(local_10 + 4) <= uVar3) || (puVar4 == (undefined4 *)0x0)) {
          FUN_0099e260();
          do {
            do {
              do {
                if ((*(uint *)(local_10 + 4) <= local_c) || (local_8 == (undefined4 *)0x0)) {
                  return;
                }
                (**(code **)(*(int *)*local_8 + 100))();
                local_8 = (undefined4 *)local_8[1];
              } while (local_8 != (undefined4 *)0x0);
              uVar3 = *(uint *)(local_10 + 4);
              local_c = local_c + 1;
            } while (uVar3 <= local_c);
            piVar2 = (int *)(*(int *)(local_10 + 8) + local_c * 4);
            do {
              if (*piVar2 != 0) break;
              local_c = local_c + 1;
              piVar2 = piVar2 + 1;
            } while (local_c < uVar3);
            if (local_c < uVar3) {
              local_8 = *(undefined4 **)(*(int *)(local_10 + 8) + local_c * 4);
            }
          } while( true );
        }
        (**(code **)(*(int *)*puVar4 + 0x70))();
        puVar4 = (undefined4 *)puVar4[1];
      } while (puVar4 != (undefined4 *)0x0);
      uVar1 = *(uint *)(local_10 + 4);
      uVar3 = uVar3 + 1;
    } while (uVar1 <= uVar3);
    piVar2 = (int *)(*(int *)(local_10 + 8) + uVar3 * 4);
    do {
      if (*piVar2 != 0) break;
      uVar3 = uVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (uVar3 < uVar1);
    if (uVar3 < uVar1) {
      puVar4 = *(undefined4 **)(*(int *)(local_10 + 8) + uVar3 * 4);
    }
  } while( true );
}

