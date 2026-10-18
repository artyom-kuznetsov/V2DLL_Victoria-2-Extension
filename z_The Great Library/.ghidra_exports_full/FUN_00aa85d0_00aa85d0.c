// FUN_00aa85d0 @ 00aa85d0 body=[[00aa85d0, 00aa871c]]


void FUN_00aa85d0(undefined4 *param_1,int param_2,char param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int in_ECX;
  
  puVar5 = *(undefined4 **)(in_ECX + 4);
  bVar3 = true;
  if (*(char *)((int)puVar5[1] + 0x25) == '\0') {
    uVar1 = *(uint *)(param_2 + 0xc);
    puVar4 = (undefined4 *)puVar5[1];
    do {
      puVar5 = puVar4;
      uVar2 = puVar5[3];
      if (param_3 == '\0') {
        if ((uVar2 <= uVar1) &&
           ((uVar2 < uVar1 ||
            (((uint)puVar5[4] <= *(uint *)(param_2 + 0x10) &&
             (((uint)puVar5[4] < *(uint *)(param_2 + 0x10) ||
              (((uint)puVar5[5] <= *(uint *)(param_2 + 0x14) &&
               (((uint)puVar5[5] < *(uint *)(param_2 + 0x14) ||
                ((int)puVar5[6] <= *(int *)(param_2 + 0x18))))))))))))) {
          bVar3 = false;
          goto LAB_00aa8675;
        }
        puVar4 = (undefined4 *)*puVar5;
        bVar3 = true;
      }
      else {
        if ((uVar2 < uVar1) ||
           ((uVar2 <= uVar1 &&
            (((uint)puVar5[4] < *(uint *)(param_2 + 0x10) ||
             (((uint)puVar5[4] <= *(uint *)(param_2 + 0x10) &&
              (((uint)puVar5[5] < *(uint *)(param_2 + 0x14) ||
               (((uint)puVar5[5] <= *(uint *)(param_2 + 0x14) &&
                ((int)puVar5[6] < *(int *)(param_2 + 0x18))))))))))))) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        bVar3 = !bVar3;
        if (bVar3) {
          puVar4 = (undefined4 *)*puVar5;
        }
        else {
LAB_00aa8675:
          puVar4 = (undefined4 *)puVar5[2];
        }
      }
    } while (*(char *)((int)puVar4 + 0x25) == '\0');
  }
  _param_3 = puVar5;
  if (bVar3) {
    if (puVar5 == (undefined4 *)**(int **)(in_ECX + 4)) {
      puVar5 = (undefined4 *)FUN_00aa75d0(&param_3,1,puVar5,param_2);
      *param_1 = *puVar5;
      *(undefined1 *)(param_1 + 1) = 1;
      return;
    }
    FUN_00aa73e0();
  }
  if ((*(uint *)(param_2 + 0xc) <= (uint)_param_3[3]) &&
     ((*(uint *)(param_2 + 0xc) < (uint)_param_3[3] ||
      ((*(uint *)(param_2 + 0x10) <= (uint)_param_3[4] &&
       ((*(uint *)(param_2 + 0x10) < (uint)_param_3[4] ||
        ((*(uint *)(param_2 + 0x14) <= (uint)_param_3[5] &&
         ((*(uint *)(param_2 + 0x14) < (uint)_param_3[5] ||
          (*(int *)(param_2 + 0x18) <= (int)_param_3[6])))))))))))) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_2);
  }
  puVar5 = (undefined4 *)FUN_00aa75d0(&param_3,bVar3,puVar5,param_2);
  *param_1 = *puVar5;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

