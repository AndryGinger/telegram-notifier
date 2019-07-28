Admin.create!(email: "admin@lvh.me", password: "password")
p "Admin with email - #{Admin.last.email} successfully created!"
