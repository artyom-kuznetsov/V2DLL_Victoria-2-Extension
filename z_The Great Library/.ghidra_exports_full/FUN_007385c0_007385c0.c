// FUN_007385c0 @ 007385c0 body=[[007385c0, 00738611]]


void FUN_007385c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined4 *in_EAX;
  undefined8 *puVar2;
  int unaff_EDI;
  
  if (param_1 != param_2) {
    puVar1 = *(undefined8 **)(unaff_EDI + 4);
    puVar2 = param_1;
    for (; param_2 != puVar1; param_2 = (undefined8 *)((int)param_2 + 0x14)) {
      *puVar2 = *param_2;
      puVar2[1] = param_2[1];
      *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_2 + 2);
      puVar2 = (undefined8 *)((int)puVar2 + 0x14);
    }
    *(undefined8 **)(unaff_EDI + 4) = puVar2;
  }
  *in_EAX = param_1;
  return;
}

