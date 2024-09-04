import json


def calcular_faturamento(data):
    # Filtra os dias com faturamento maior que 0
    faturamentos = [entry['valor'] for entry in data if entry['valor'] > 0]
    
    if not faturamentos:
        return "Nenhum faturamento foi registrado no mês."
    
    # Calcula o menor e o maior valor de faturamento
    menor_faturamento = min(faturamentos)
    maior_faturamento = max(faturamentos)
    
    # Calcula a média de faturamento mensal
    media_mensal = sum(faturamentos) / len(faturamentos)
    
    # Conta o número de dias com faturamento superior à média
    dias_acima_da_media = sum(1 for valor in faturamentos if valor > media_mensal)
    
    return menor_faturamento, maior_faturamento, dias_acima_da_media

def main():
    # Carrega os dados de faturamento de um arquivo JSON
    with open('faturamento.json', 'r') as file:
        data = json.load(file)
    
    # Calcula os valores requeridos
    menor_faturamento, maior_faturamento, dias_acima_da_media = calcular_faturamento(data)
    
    # Exibe os resultados
    print(f"Menor valor de faturamento: {menor_faturamento:.2f}")
    print(f"Maior valor de faturamento: {maior_faturamento:.2f}")
    print(f"Número de dias com faturamento acima da média: {dias_acima_da_media}")

if __name__ == "__main__":
    main()
