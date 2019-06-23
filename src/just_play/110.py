import pickle

game_data = { "position":"N2 E3","status":"weak"}

save_file = open("save.dat","wb")
pickle.dump(game_data,save_file)
save_file.close()

load_file = open("save.dat","rb")
load_game_data = pickle.load(load_file)
load_file.close()

print(load_game_data["position"])
