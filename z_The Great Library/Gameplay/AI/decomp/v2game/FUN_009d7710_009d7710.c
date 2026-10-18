// FUN_009d7710 @ 009d7710 body=[[009d7710, 009d776e] [009d7770, 009d77d5]]


void FUN_009d7710(undefined1 *param_1)

{
  undefined1 uVar1;
  int in_EAX;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *unaff_EDI;
  undefined1 *local_c;
  
  puVar7 = (undefined1 *)(in_EAX - (int)param_1);
  puVar6 = puVar7;
  local_c = unaff_EDI + -(int)param_1;
  while (puVar4 = puVar6, puVar4 != (undefined1 *)0x0) {
    puVar6 = (undefined1 *)((int)local_c % (int)puVar4);
    local_c = puVar4;
  }
  if (((int)local_c < (int)(unaff_EDI + -(int)param_1)) && (0 < (int)local_c)) {
    puVar6 = local_c + (int)param_1;
    do {
      puVar4 = puVar6 + (int)puVar7;
      if (puVar6 + (int)puVar7 == unaff_EDI) {
        puVar4 = param_1;
      }
      puVar3 = (undefined1 *)-(int)puVar4;
      puVar2 = puVar6;
      do {
        uVar1 = *puVar2;
        *puVar2 = *puVar4;
        *puVar4 = uVar1;
        if ((int)puVar7 < (int)(unaff_EDI + (int)puVar3)) {
          puVar3 = puVar3 + -(int)puVar7;
          puVar5 = puVar7;
        }
        else {
          puVar5 = param_1 + ((int)puVar7 - (int)unaff_EDI);
          puVar3 = unaff_EDI + (int)(puVar3 + (-(int)puVar7 - (int)param_1));
        }
        puVar5 = puVar4 + (int)puVar5;
        puVar2 = puVar4;
        puVar4 = puVar5;
      } while (puVar5 != puVar6);
      local_c = local_c + -1;
      puVar6 = puVar6 + -1;
    } while (0 < (int)local_c);
  }
  return;
}

