// FUN_00aa8570 @ 00aa8570 body=[[00aa8570, 00aa85c5]]


undefined4 * FUN_00aa8570(uint *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_ECX;
  undefined4 *puVar3;
  
  puVar2 = *(undefined4 **)(in_ECX + 4);
  if (*(char *)((int)puVar2[1] + 0x25) == '\0') {
    puVar1 = puVar2;
    puVar3 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar3;
      if (((uint)puVar2[3] < *param_1) ||
         (((uint)puVar2[3] <= *param_1 &&
          (((uint)puVar2[4] < param_1[1] ||
           (((uint)puVar2[4] <= param_1[1] &&
            (((uint)puVar2[5] < param_1[2] ||
             (((uint)puVar2[5] <= param_1[2] && ((int)puVar2[6] < (int)param_1[3])))))))))))) {
        puVar3 = (undefined4 *)puVar2[2];
        puVar2 = puVar1;
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar3 + 0x25) == '\0');
  }
  return puVar2;
}

