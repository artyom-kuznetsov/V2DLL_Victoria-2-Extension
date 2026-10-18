// FUN_009ab4f0 @ 009ab4f0 body=[[009ab4f0, 009ab52c] [009ab530, 009ab604]]


/* WARNING: Type propagation algorithm not settling */

undefined4 * FUN_009ab4f0(undefined4 *param_1,undefined4 *param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 **ppuVar3;
  undefined8 **ppuVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined1 *local_14 [3];
  int local_8;
  
  local_14[2] = &LAB_00b3bdd6;
  local_14[1] = ExceptionList;
  ExceptionList = local_14 + 1;
  *param_1 = *param_2;
  puVar1 = param_1 + 1;
  *puVar1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  local_8 = 0;
  puVar6 = (undefined4 *)param_2[1];
LAB_009ab530:
  do {
    if ((puVar6 < (undefined4 *)param_2[1]) || ((undefined4 *)param_2[2] <= puVar6)) {
      ExceptionList = local_14[1];
      return param_1;
    }
    puVar5 = (undefined8 *)FUN_00aae9af(0x34);
    local_8._0_1_ = 1;
    if (puVar5 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)0x0;
    }
    else {
      puVar2 = (undefined8 *)*puVar6;
      *puVar5 = *puVar2;
      puVar5[1] = puVar2[1];
      local_14[0] = (undefined1 *)puVar5;
      FUN_009aa260(puVar5 + 2,puVar2 + 2);
    }
    local_8 = (uint)local_8._1_3_ << 8;
    ppuVar3 = (undefined8 **)param_1[2];
    local_14[0] = (undefined1 *)puVar5;
    if (local_14 < ppuVar3) {
      ppuVar4 = (undefined8 **)*puVar1;
      if (local_14 < ppuVar4) goto LAB_009ab5cb;
      if (ppuVar3 == (undefined8 **)param_1[3]) {
        FUN_00a513f0();
      }
      if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
        *(undefined4 *)param_1[2] =
             *(undefined4 *)(*puVar1 + ((int)local_14 - (int)ppuVar4 >> 2) * 4);
        param_1[2] = param_1[2] + 4;
        puVar6 = puVar6 + 1;
        goto LAB_009ab530;
      }
    }
    else {
LAB_009ab5cb:
      if (ppuVar3 == (undefined8 **)param_1[3]) {
        FUN_00a513f0();
      }
      if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
        *(undefined4 *)param_1[2] = puVar5;
      }
    }
    param_1[2] = param_1[2] + 4;
    puVar6 = puVar6 + 1;
  } while( true );
}

