// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UI/Inventory/ARListItemView.h"
#include "ARListItemMagazineView.generated.h"

/**
 * 
 */
UCLASS()
class ACTIONRPGGAME_API UARListItemMagazineView : public UARListItemView
{
	GENERATED_BODY()
	
public:
	virtual FReply NativeOnMouseButtonDoubleClick(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent) override;
	
	
};
