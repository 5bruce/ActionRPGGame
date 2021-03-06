// Fill out your copyright notice in the Description page of Project Settings.

#include "ARGunAttributes.h"
#include "Net/UnrealNetwork.h"
#include "AFAbilityComponent.h"

void UARGunAttributes::GetLifetimeReplicatedProps(TArray< class FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(UARGunAttributes, Magazine);
}

void UARGunAttributes::OnRep_Magazine()
{
	float dua = 0;
	UARGunAttributes* asd = this;
	if (OwningAttributeComp->GetOwner()->GetNetMode() == ENetMode::NM_Client)
	{
		Magazine = this->Magazine;
	}
}